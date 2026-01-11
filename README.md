# 🐙 Kraky

**Kraky** is a DIY, open-hardware device inspired by the **Flipper Zero**, built using **cheap, widely available components** with a strong focus on **education, modularity, and repairability**.

Hi! I'm **Thesh**, a **17-year-old tinkerer** passionate about electronics, embedded systems, and learning by building.  
I’ve always wanted a Flipper Zero, but its price was always out of my reach.  
Instead of giving up, I decided to design and build my own device from scratch — not as a replacement, but as a **learning experience**.

When I discovered the *Blueprint* program, I realized it was the perfect opportunity to turn this idea into a structured, documented, and shareable project.

Kraky is not about shortcuts or hacking things blindly — it’s about **understanding how modern electronic tools are built**.

---

## ⚠️ Educational Purpose Only

Kraky is an **educational and experimental project**, created for the purpose of learning:

- electronics
- PCB design
- embedded systems
- hardware iteration and debugging

This project is intended **for educational purposes only**.  
It is **not designed, promoted, or intended** for illegal, unethical, or malicious activities.

The author takes **no responsibility** for any misuse of the information, schematics, firmware, or hardware designs provided in this repository.  
Users are responsible for ensuring that their use of this project complies with **local laws and regulations**.

By using or contributing to this project, you agree to use it **responsibly and legally**.

---

## 🎓 What You Can Learn From This Project

By following the development of Kraky, you can learn:

- How to design a **modular PCB** using KiCad
- Power management for **battery-powered devices**
- ESP32-S3 pin planning and peripheral usage
- Integration of **Sub-GHz, RFID, NFC, and IR**
- Designing hardware with **repairability in mind**
- Iterative hardware design (v1 → v2 → v3)
- How to document and share a hardware project effectively

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

## 🔩 Main Components

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

## 🚀 Project Timeline & Iterations

### 🧠 Initial Concept
This was the very first sketch that inspired the project.  
At this stage, my electronics and KiCad skills were limited, but the goal was clear: build something real and learn along the way.

![Initial concept](https://github.com/user-attachments/assets/1626d6f5-307c-4bb1-85bb-4e4a790e12ef)

---

### ⚡ First Electrical Schematic
My **first-ever electrical schematic**.  
Looking back, it had many flaws, but it helped me understand how all the modules could fit together.

![Electrical schematic v1](https://github.com/user-attachments/assets/244b8a31-ba79-4162-bc07-26a6d296d100)

---

### 🔋 Second Electrical Schematic
In this revision, I focused on **improving battery charging and power management**, after realizing the first version was not reliable enough.

![Electrical schematic v2](https://github.com/user-attachments/assets/677e1146-7904-484f-a8f8-a3d9d14d5772)

---

### 🔌 Third Electrical Schematic
I noticed unstable behavior during peak current usage.  
To fix this, I added **proper decoupling capacitors** near critical components, improving stability and component lifespan.

![Electrical schematic v3](https://github.com/user-attachments/assets/7befed15-7662-4fee-96a9-f394c7928868)

---

## 🧱 Enclosure Design

### First 3D Render
My first attempt at designing an enclosure — rough, but useful to understand spacing and constraints.

![Enclosure v1](https://github.com/user-attachments/assets/510a1fe3-8ec6-4968-82c1-166bb77219dc)

---

### Second 3D Render
In this iteration, I added proper cutouts for:
- GPIO pins
- Switch
- IR transceiver  

This made the design more realistic and closer to a usable device.

![Enclosure v2](https://github.com/user-attachments/assets/1063f1d2-6d28-4f8f-b820-846ed62322e1)

---

## 🖥️ PCB Design

### First PCB Revision
The PCB was designed starting from the schematic and developed on **3 layers**.  
This version prioritizes **modularity and accessibility**, making debugging and future repairs much easier.

![PCB render](https://github.com/user-attachments/assets/4b19a7ce-57b9-4f3d-8297-5cf9dd6f6eb1)

---

### Fourth Electrical Schematic
I'm starting to search part on Aliexpress, so i found the esp32 that i wanna use, i changed the elettric scheme with the new esp32 and i rerouted all the connections.

![Electrical schematic v4](https://github.com/user-attachments/assets/2c8b5e91-b52f-4c38-a808-ecc594651594)


---

## ❌ Mistakes & Lessons Learned

- I underestimated the importance of decoupling capacitors in early designs
- My first PCB layouts were too compact and hard to debug
- Power management deserves more attention than I initially gave it
- Iterating slowly saves time and money in hardware projects

---

## 🔐 Responsible Use

Kraky is designed to help understand how multifunction electronic devices work.  
It is **not meant to bypass security systems or laws**.

All features are implemented with an **educational and experimental focus**.

---

## 🧰 Tools Used

- KiCad 9
- Fusion360
- PlatformIO

---

## 🛠️ Project Status

This project is **work in progress (WIP)**.  
Future updates will include:

- microSD implementation
- firmware development
- power optimization
- smaller and cleaner PCB revisions

---

## 🤝 Contributing

Kraky is an **open and educational project**.  
Feedback, suggestions, and improvements are always welcome.

---

## 📜 License

This project will be released under an **open-source license** (TBD).

---

> If this project inspired you to learn hardware design, consider ⭐ starring the repository!
