/*
 * KRAKY DEVICE – ESP32
 */

#include <Arduino.h>
#include <WiFi.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_PN532.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRsend.h>
#include <IRutils.h>
#include <LoRa.h>

// ================= PIN =================

// Pulsanti
#define BTN_UP     5
#define BTN_DOWN   18
#define BTN_OK     19
#define BTN_BACK   25

// OLED
#define OLED_SDA   21
#define OLED_SCL   22

// Buzzer
#define BUZZER     13

// RFID RDM6300 (Serial2)
#define RFID_RX    17
#define RFID_TX    4

// IR
#define IR_RX      35
#define IR_TX      16

// SPI (VSPI)
#define SPI_SCK    18
#define SPI_MISO   19
#define SPI_MOSI   23

// PN532
#define NFC_SS     5

// LoRa
#define LORA_SS    26
#define LORA_RST   27
#define LORA_DIO0  14

// ================= OGGETTI =================

Adafruit_SSD1306 display(128, 64, &Wire, -1);
Adafruit_PN532 nfc(NFC_SS);

IRrecv irRecv(IR_RX);
IRsend irSend(IR_TX);
decode_results irResults;

// ================= MENU =================

const char *menuItems[] = {
  "RFID Reader",
  "NFC Scanner",
  "IR Receiver",
  "LoRa Listener",
  "WiFi Scan",
  "About"
};

uint8_t menuIndex = 0;
const uint8_t MENU_LEN = 6;

// ================= UTILITY =================

void beep(uint16_t freq, uint16_t dur) {
  tone(BUZZER, freq, dur);
  delay(dur);
  noTone(BUZZER);
}

bool pressed(uint8_t pin) {
  return digitalRead(pin) == LOW;
}

void drawText(const char *txt) {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(txt);
  display.display();
}

// ================= MENU DISPLAY =================

void drawMenu() {
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("=== KRAKY ===\n");

  for (uint8_t i = 0; i < MENU_LEN; i++) {
    display.print(i == menuIndex ? "> " : "  ");
    display.println(menuItems[i]);
  }
  display.display();
}

// ================= RFID =================

void scanRFID() {
  Serial2.begin(9600, SERIAL_8N1, RFID_RX, RFID_TX);
  drawText("RFID\nAvvicina il tag");

  char id[16] = {0};
  uint8_t idx = 0;
  unsigned long t0 = millis();

  while (millis() - t0 < 8000) {
    if (Serial2.available()) {
      char c = Serial2.read();
      if (isHexadecimalDigit(c) && idx < 12) {
        id[idx++] = c;
        id[idx] = '\0';
      }
      if (idx >= 12) {
        char buf[32];
        snprintf(buf, sizeof(buf), "TAG RFID:\n%s", id);
        drawText(buf);
        beep(1000, 150);
        delay(3000);
        return;
      }
    }
    if (pressed(BTN_BACK)) break;
  }

  drawText("Nessun TAG");
  delay(2000);
}

// ================= NFC =================

void scanNFC() {
  drawText("NFC\nAvvicina il tag");

  uint8_t uid[7];
  uint8_t uidLen;

  unsigned long t0 = millis();
  while (millis() - t0 < 8000) {
    if (nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, uid, &uidLen)) {
      display.clearDisplay();
      display.println("NFC UID:");
      for (uint8_t i = 0; i < uidLen; i++) {
        display.print(uid[i], HEX);
        display.print(" ");
      }
      display.display();
      beep(1200, 200);
      delay(3000);
      return;
    }
    if (pressed(BTN_BACK)) break;
  }

  drawText("Nessun NFC");
  delay(2000);
}

// ================= IR =================

void scanIR() {
  drawText("IR\nPremi un tasto");
  irRecv.enableIRIn();

  unsigned long t0 = millis();
  while (millis() - t0 < 10000) {
    if (irRecv.decode(&irResults)) {
      char buf[48];
      snprintf(
        buf,
        sizeof(buf),
        "IR:\n%s\n0x%X",
        typeToString(irResults.decode_type).c_str(),
        irResults.value
      );
      drawText(buf);
      beep(900, 150);
      irRecv.resume();
      delay(3000);
      return;
    }
    if (pressed(BTN_BACK)) break;
  }

  drawText("Nessun IR");
  delay(2000);
}

// ================= LORA =================

void listenLoRa() {
  drawText("LoRa\nIn ascolto...");

  unsigned long t0 = millis();
  while (millis() - t0 < 15000) {
    int size = LoRa.parsePacket();
    if (size) {
      char msg[64];
      uint8_t i = 0;
      while (LoRa.available() && i < sizeof(msg) - 1) {
        msg[i++] = (char)LoRa.read();
      }
      msg[i] = '\0';
      drawText(msg);
      beep(800, 200);
      delay(3000);
      return;
    }
    if (pressed(BTN_BACK)) break;
  }

  drawText("Nessun pacchetto");
  delay(2000);
}

// ================= WIFI =================

void wifiScan() {
  drawText("WiFi scan...");
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(200);

  int n = WiFi.scanNetworks();
  display.clearDisplay();
  display.println("Reti trovate:");

  for (int i = 0; i < n && i < 4; i++) {
    display.println(WiFi.SSID(i));
  }
  display.display();
  beep(1000, 200);
  delay(4000);
}

// ================= ABOUT =================

void about() {
  drawText("KRAKY DEVICE\nESP32\nv1.0\nby You <3");
  delay(4000);
}

// ================= SETUP =================

void setup() {
  Serial.begin(115200);

  pinMode(BTN_UP, INPUT_PULLUP);
  pinMode(BTN_DOWN, INPUT_PULLUP);
  pinMode(BTN_OK, INPUT_PULLUP);
  pinMode(BTN_BACK, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);

  Wire.begin(OLED_SDA, OLED_SCL);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  SPI.begin(SPI_SCK, SPI_MISO, SPI_MOSI);

  nfc.begin();
  nfc.SAMConfig();

  LoRa.setPins(LORA_SS, LORA_RST, LORA_DIO0);
  LoRa.begin(433E6);

  drawText("KRAKY BOOT");
  beep(600, 100);
  beep(800, 100);
}

// ================= LOOP =================

void loop() {
  drawMenu();

  if (pressed(BTN_UP)) {
    menuIndex = (menuIndex + MENU_LEN - 1) % MENU_LEN;
    beep(1200, 40);
    delay(200);
  }

  if (pressed(BTN_DOWN)) {
    menuIndex = (menuIndex + 1) % MENU_LEN;
    beep(1200, 40);
    delay(200);
  }

  if (pressed(BTN_OK)) {
    beep(1500, 60);
    switch (menuIndex) {
      case 0: scanRFID(); break;
      case 1: scanNFC(); break;
      case 2: scanIR(); break;
      case 3: listenLoRa(); break;
      case 4: wifiScan(); break;
      case 5: about(); break;
    }
  }

  delay(100);
}
