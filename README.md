# 🐙 Kraky

**Kraky** is a DIY, open-hardware device inspired by the **Flipper Zero**, built using **cheap and widely available components**, with a strong focus on **modularity, repairability, and learning**.

Hi! I'm **Thesh**, a **17-year-old tinkerer** who loves experimenting with microcontrollers and embedded systems.  
I’ve always wanted a Flipper Zero, but its price has always been out of my reach.  
Instead of giving up, I decided to **build my own device**, improve it step by step, and share the entire journey with others.

When I discovered the *Blueprint* project, I realized it was the perfect opportunity to create my own  
**“Flipper Zero 2”** — something powerful, hackable, understandable, and **easy to repair**.

Kraky is designed to be:
- 🧩 **Modular**
- 🔧 **Highly repairable**
- 💸 **Affordable**
- 📖 **Fully documented**
- 🧠 **Educational**

---

## ⚠️ Educational Purpose Only

Kraky is an **educational and experimental project** created for the purpose of **learning electronics, embedded systems, and hardware design**.

This project is intended **for educational purposes only**.  
It is **not designed, promoted, or intended** for illegal, unethical, or malicious activities.

The author takes **no responsibility** for any misuse of the information, schematics, firmware, or hardware designs provided in this repository.  
Users are responsible for ensuring that their use of this project complies with **local laws and regulations**.

By using or contributing to this project, you agree to use it **responsibly and legally**.

---

## ✨ Features (Planned & Implemented)

- Wi-Fi & Bluetooth connectivity
- Sub-GHz communication
- RFID & NFC support
- Infrared transceiver
- GPIO expansion
- microSD support *(planned)*
- Speaker
- Rechargeable battery with protection
- Custom 3D-printed enclosure

---

## 🔩 Components

| Function | Component |
|--------|----------|
| Logic board / Wi-Fi / Bluetooth | **ESP32-S3** |
| Sub-GHz | **RFM98W-433S2** |
| RFID | **RDM6300** |
| NFC | **ST25R3911B-AQF** |
| Battery charger | **TP4056** |
| Battery | Li-ion |
| IR Receiver | **TSOP38238** |
| IR Transmitter | IR LED |
| Speaker | Passive |
| GPIO Expansion | 10 Female GPIO pins |
| microSD Slot | **CM1624** *(not yet implemented in PCB)* |
| Buttons | 4 tactile buttons |

---

## 🚀 Project Timeline

### 🧠 The Beginning
This was the **very first sketch** that inspired the project.  
At that time, my KiCad and electronics knowledge was limited, but this concept pushed me to learn and improve.

![Initial concept](https://github.com/user-attachments/assets/1626d6f5-307c-4bb1-85bb-4e4a790e12ef)

---

### ⚡ First Electrical Schematic
My **first-ever electrical schematic**.  
Far from perfect, but it marked the real beginning of the project.

![Electrical schematic v1](https://github.com/user-attachments/assets/244b8a31-ba79-4162-bc07-26a6d296d100)

---

### 🔋 Second Electrical Schematic
Improved power management and **better battery charging logic**.

![Electrical schematic v2](https://github.com/user-attachments/assets/677e1146-7904-484f-a8f8-a3d9d14d5772)

---

### 🔌 Third Electrical Schematic
Added proper **decoupling capacitors** and improved current stability to increase component lifespan.

![Electrical schematic v3](https://github.com/user-attachments/assets/7befed15-7662-4fee-96a9-f394c7928868)

---

## 🧱 Enclosure Design

### First 3D Render
My first attempt at enclosure design — rough, but functional.

![Enclosure v1](https://github.com/user-attachments/assets/510a1fe3-8ec6-4968-82c1-166bb77219dc)

---

### Second 3D Render
Added cutouts for:
- GPIO pins
- Switch
- IR transceiver  

Much more refined and practical.

![Enclosure v2](https://github.com/user-attachments/assets/1063f1d2-6d28-4f8f-b820-846ed62322e1)

---

## 🖥️ PCB Design

### First PCB Render
The PCB was designed starting from the schematic and developed on **3 layers**.  
This version focuses on **modularity**, making debugging and repairs much easier.

![PCB render](https://github.com/user-attachments/assets/4b19a7ce-57b9-4f3d-8297-5cf9dd6f6eb1)

---

## 🛠️ Future Plans

- Implement microSD slot
- Firmware development
- Power optimization
- Smaller and cleaner PCB revision
- Community contributions and feedback

---

## 🤝 Contributing

Kraky is an **open project**.  
Ideas, improvements, bug reports, and pull requests are **more than welcome**.

---

## 📜 License

This project will be released under an **open-source license** (TBD).

---

> If you like this project, consider ⭐ starring the repository and sharing it!
