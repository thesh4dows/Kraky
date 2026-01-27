# Kraky

**Kraky** is a DIY, open-hardware project inspired by the **Flipper Zero**, built using **cheap components** with a strong focus on **education, modularity, and repairability**.

Hi! I'm **Thesh**, a **17-year-old tinkerer** passionate about electronics, embedded systems, and learning by experiencing.  
I’ve always wanted a Flipper Zero, but its price was always out of my reach.  
Instead of giving up, I decided to design and build my own device from scratch — not as a replacement, but as a **learning experience**.

Kraky is not about shortcuts or hacking things blindly — it’s about **understanding how modern electronic tools are built**.
Kraky is designed to be used like an educational device to experiment with all sorts of waves, you can use it however you want as long as you use it on your own things.

---


## Main Components

| Function | Component |
|--------|----------|
| Logic board / Wi-Fi / Bluetooth | **ESP32-S3** |
| Sub-GHz | **RFM98W-433S2** |
| RFID | **RDM6300** |
| NFC | **PN532** |
| Battery charger | **TP4056** |
| Battery | Li-ion |
| IR Receiver | **TSOP38238** |
| IR Transmitter | IR LED |
| Speaker | Passive |
| GPIO Expansion | 10 Female GPIO pins |
| microSD Slot | **CM1624** *(not yet implemented in PCB)* |
| Buttons | 4 tactile buttons |
| Oscilloscope | MPU6050 |
| Display | Oled Display |


---

## Future Features 

- microSD support
- new pcb more small
- modularity

---

## WIRING DIAGRAM

<img width="961" height="562" alt="Immagine 2026-01-27 151441" src="https://github.com/user-attachments/assets/b058666a-f630-4128-bf92-5a74d9b27d1e" />



---

## PCB 

<img width="585" height="601" alt="Immagine 2026-01-27 155507" src="https://github.com/user-attachments/assets/342e4178-4a40-436d-81ef-f2e2750aef22" />



---


## PCB AND 3D RENDER COMBINED

<img width="1515" height="798" alt="Immagine 2026-01-27 175736" src="https://github.com/user-attachments/assets/c481b13b-f083-40e0-a4b8-5c2bea290b65" />


---

## BOM LIST
| Component | Link |
|--------|----------|
| **ESP32-S3** | [Aliexpress](https://it.aliexpress.com/item/1005009962649997.html?spm=a2g0o.cart.0.0.5d8818fcuRNXq9&mp=1&pdp_npi=6%40dis%21EUR%21EUR%208.05%21EUR%207.33%21%21EUR%207.33%21%21%21%4021038e1e17694574608762210ead3b%2112000050714164641%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **RFM98W-433S2** | [Aliexpress](https://it.aliexpress.com/item/1005008889705168.html?spm=a2g0o.cart.0.0.5d8818fcuRNXq9&mp=1&pdp_npi=6%40dis%21EUR%21EUR%2013.69%21EUR%2013.69%21%21EUR%2013.69%21%21%21%4021038e1e17694574632892284ead3b%2112000047093365845%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **RDM6300** | [Aliexpress](https://it.aliexpress.com/item/32878097013.html?spm=a2g0o.cart.0.0.5d8818fcuRNXq9&mp=1&pdp_npi=6%40dis%21EUR%21EUR%203.16%21EUR%203.16%21%21EUR%203.16%21%21%21%4021038e1e17694574632892284ead3b%2165586589948%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **PN532** | [Aliexpress](https://it.aliexpress.com/item/1005008554785133.html?spm=a2g0o.cart.0.0.5d8818fcuRNXq9&mp=1&pdp_npi=6%40dis%21EUR%21EUR%206.69%21EUR%203.07%21%21EUR%203.01%21%21%21%4021038e1e17694574608762210ead3b%2112000045690199375%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **TP4056** | [Aliexpress](https://it.aliexpress.com/item/1005006520142503.html?spm=a2g0o.productlist.main.9.370dQqVLQqVLdw&algo_pvid=b4bbd4a5-a930-4122-b394-fd39a9f770f2&algo_exp_id=b4bbd4a5-a930-4122-b394-fd39a9f770f2-8&pdp_ext_f=%7B%22order%22%3A%2220%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%219.23%214.34%21%21%2174.32%2134.93%21%402103834817694577274995958e83e4%2112000037514108642%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895&curPageLogUid=HOVHMltfnK6x&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006520142503%7C_p_origin_prod%3A) |
| **Battery** | [Aliexpress](https://it.aliexpress.com/item/1005006284232365.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%2017.40%21EUR%2010.09%21%21EUR%209.59%21%21%21%4021038e1e17694577674865712ead3b%2112000036605860873%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **TSOP38238** | [Aliexpress](https://it.aliexpress.com/item/32949322622.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%202.24%21EUR%202.24%21%21EUR%202.24%21%21%21%4021038e1e17694577674865712ead3b%2166318108356%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| IR LED | [Aliexpress](https://it.aliexpress.com/item/1005003852381793.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%201.11%21EUR%201.11%21%21EUR%201.11%21%21%21%4021038e1e17694577674865712ead3b%2112000027809445076%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| Speaker | [Aliexpress](https://it.aliexpress.com/item/1005008743722885.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%204.31%21EUR%202.07%21%21EUR%202.05%21%21%21%4021038e1e17694577658065675ead3b%2112000046486255672%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| 10 Female GPIO pins | [Aliexpress](https://it.aliexpress.com/item/1005008966856219.html?spm=a2g0o.productlist.main.7.400c469fw7ynlD&algo_pvid=9f47b1bf-4ccb-44b8-978c-11ec9fc6ee57&algo_exp_id=9f47b1bf-4ccb-44b8-978c-11ec9fc6ee57-6&pdp_ext_f=%7B%22order%22%3A%22554%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%211.36%211.21%21%21%211.57%211.40%21%4021038e1e17694578315316029ead41%2112000047493524680%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895%3BpisId%3A5000000198855826&curPageLogUid=SOrvoxlj0a91&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008966856219%7C_p_origin_prod%3A) |
| **10pF** | [Aliexpress](https://it.aliexpress.com/item/1005010196158848.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%201.35%21EUR%201.30%21%21EUR%201.27%21%21%21%4021038e1e17694577658065675ead3b%2112000051487921556%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| Buttons | [Aliexpress](https://it.aliexpress.com/item/1005003751942617.html?spm=a2g0o.productlist.main.6.7b66UgMCUgMC2v&algo_pvid=90b119e5-116b-44ca-8d19-1b1e01badc9a&algo_exp_id=90b119e5-116b-44ca-8d19-1b1e01badc9a-5&pdp_ext_f=%7B%22order%22%3A%22457%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%212.68%212.32%21%21%2121.57%2118.69%21%40211b618e17694579682652136e0d37%2112000027951043689%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895%3BpisId%3A5000000198855826&curPageLogUid=h3YPZfgd06kE&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005003751942617%7C_p_origin_prod%3A) |
| MPU6050 | [Aliexpress](https://it.aliexpress.com/item/1005010057794277.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%201.89%21EUR%201.89%21%21EUR%201.89%21%21%21%4021038e1e17694577658065675ead3b%2112000050979433010%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **100nF** | [Aliexpress](https://it.aliexpress.com/item/1005005691676032.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%202.24%21EUR%201.31%21%21EUR%201.31%21%21%21%4021038e1e17694577658065675ead3b%2112000034022594969%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **Battery connector** | [Aliexpress](https://it.aliexpress.com/item/1005009883885132.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%204.30%21EUR%201.92%21%21EUR%201.92%21%21%21%4021038e1e17694577658065675ead3b%2112000050645799497%21ct%21IT%214906144315%21%213%210%21&gatewayAdapt=glo2ita) |
| **2N3904** | [Aliexpress](https://it.aliexpress.com/item/1005009725419981.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%204.02%21EUR%201.89%21%21EUR%201.87%21%21%21%4021038e1e17694577658065675ead3b%2112000049959909602%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **BLM21PG331SN1D** | [Aliexpress](https://it.aliexpress.com/item/1005008733676409.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%204.29%21EUR%204.29%21%21EUR%204.29%21%21%21%4021038e1e17694577658065675ead3b%2112000046442796431%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) | 
| **Antenna** | [Aliexpress](https://it.aliexpress.com/item/1005001837112551.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%201.87%21EUR%201.70%21%21EUR%201.70%21%21%21%4021038e1e17694577658065675ead3b%2112000017802413653%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **1K ohm** | [Aliexpress](https://it.aliexpress.com/item/1005008049421850.html?spm=a2g0o.productlist.main.5.339e2072xf4Fp6&algo_pvid=60a0f9d2-cb3a-4061-b250-3a89b5594825&algo_exp_id=60a0f9d2-cb3a-4061-b250-3a89b5594825-4&pdp_ext_f=%7B%22order%22%3A%221081%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%212.03%211.29%21%21%2116.36%2110.40%21%40211b61bb17694589696196228e2a30%2112000043433742591%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895%3BpisId%3A5000000198855826&curPageLogUid=0AoDAOfCkDU4&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008049421850%7C_p_origin_prod%3A) |
| **10K ohm** | [Aliexpress](https://it.aliexpress.com/item/1005008049421850.html?spm=a2g0o.productlist.main.5.339e2072xf4Fp6&algo_pvid=60a0f9d2-cb3a-4061-b250-3a89b5594825&algo_exp_id=60a0f9d2-cb3a-4061-b250-3a89b5594825-4&pdp_ext_f=%7B%22order%22%3A%221081%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%212.03%211.29%21%21%2116.36%2110.40%21%40211b61bb17694589696196228e2a30%2112000043433742591%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895%3BpisId%3A5000000198855826&curPageLogUid=0AoDAOfCkDU4&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008049421850%7C_p_origin_prod%3A) |
| **100 ohm** | [Aliexpress](https://it.aliexpress.com/item/1005008049421850.html?spm=a2g0o.productlist.main.5.339e2072xf4Fp6&algo_pvid=60a0f9d2-cb3a-4061-b250-3a89b5594825&algo_exp_id=60a0f9d2-cb3a-4061-b250-3a89b5594825-4&pdp_ext_f=%7B%22order%22%3A%221081%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%212.03%211.29%21%21%2116.36%2110.40%21%40211b61bb17694589696196228e2a30%2112000043433742591%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895%3BpisId%3A5000000198855826&curPageLogUid=0AoDAOfCkDU4&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008049421850%7C_p_origin_prod%3A) |
| **Oled Display** | [Aliexpress](https://it.aliexpress.com/item/1005009180825215.html?spm=a2g0o.productlist.main.2.3d2d471bqR6akO&algo_pvid=3bf73457-57de-4609-b5e8-c52edf535fa0&algo_exp_id=3bf73457-57de-4609-b5e8-c52edf535fa0-1&pdp_ext_f=%7B%22order%22%3A%2279%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%213.36%213.06%21%21%213.90%213.55%21%402103890917695190995271643e41ef%2112000048217113638%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895%3BpisId%3A5000000198855826&curPageLogUid=jkERcBiiep5C&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005009180825215%7C_p_origin_prod%3A) |

---

## Responsible Use

Kraky is designed to help understand how multifunction electronic devices work.  
It is **not meant to bypass security systems or laws**.

All features are implemented with an **educational and experimental focus**.

---

## Tools Used

- KiCad 9
- Fusion360
- PlatformIO

---

## Project Status

This project is **work in progress (WIP)**.  
Future updates will include:

- microSD implementation
- firmware development
- power optimization
- smaller and cleaner PCB revisions

---

## Contributing

Kraky is an **open and educational project**.  
Feedback, suggestions, and improvements are always welcome.

---

## License

This project will be released under an **open-source license** (TBD).

---
