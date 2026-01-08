# Kraky
Its a diy project of a device that emulates the flipper zero but using well available and cheap parts.
Hi i'm thesh a 17 years old thinkerer that likes a lot to expirience with microcontrollers, i always 
wanted a Flipper Zero but the price it's always has been out of my reach so i always wanted to build one myself.
When i've se the Blueprint project i felt that is my chance to build a "Flipper Zero 2" myself and then share my 
expirience and project with others. Another characteristic that my device will have is a high reparability so 
if there is any type of problem with the device it can be repaired without a sweat.

# Components:

- logic board/wifi/bluetooth->esp32-s3
- sub ghz antenna->RFM98W-433S2
- battery
- rfid-> RDM6300
- battery protector-> tp4056
- 10 gpio pins(females)
- microsd slot-> CM1624 -> not implemented in the pcb yet
- speaker
- ir transceiver-> reciver TSOP38238, trasmiter IR LED
- nfc-> ST25R3911B-AQF
- 4 buttons

# The start of the project

<img width="2339" height="1654" alt="scheme" src="https://github.com/user-attachments/assets/1626d6f5-307c-4bb1-85bb-4e4a790e12ef" />
This was the firts sketch of the project that inspired me, now i've came a long way both in kicad skills and chip knowlege but there is still a long way to go.

# The first version of the elettric diagram

This is the first version of the elettric diagram, in fact it was the first time ever that i made an elettric diagram, there are a lot fo things to do but i'm already improving.

<img width="2339" height="1654" alt="schema-elettrico1" src="https://github.com/user-attachments/assets/244b8a31-ba79-4162-bc07-26a6d296d100" />


# The second version of the elettric diagram

This is the second version of the elettric diagram where i improved some things like the charging method.

<img width="3507" height="2480" alt="image" src="https://github.com/user-attachments/assets/677e1146-7904-484f-a8f8-a3d9d14d5772" />

# The third version of the elettric diagram

This is the third version of the elettric diagram where i improve the smoothness of the current that flows on some capacitors to ensure the long life of the componets.

<img width="2339" height="1654" alt="schema-elettrico-3" src="https://github.com/user-attachments/assets/7befed15-7662-4fee-96a9-f394c7928868" />

# The first version of the 3D render

This is the first version of the enclosure of the Kraky, like for the elettric diagram it was also de first time that i done something like that, and it's still very rough but i've already some changes in mind.

<img width="1920" height="842" alt="kraky" src="https://github.com/user-attachments/assets/510a1fe3-8ec6-4968-82c1-166bb77219dc" />

# The second version of the 3D render

This is the second version of the enclosure of the Kraky, i added more holes for all the modules like the 10 gpio pins, the switch and the cutout for the ir transreciver.

<img width="1920" height="842" alt="kraky v6" src="https://github.com/user-attachments/assets/1063f1d2-6d28-4f8f-b820-846ed62322e1" />

# The first render of the pcb

I made this pcb starting from the schematic made previosly and svilupping it on 3 layers, this version is very modular for an easier debugging.

<img width="858" height="881" alt="Screenshot 2026-01-04 152653" src="https://github.com/user-attachments/assets/4b19a7ce-57b9-4f3d-8297-5cf9dd6f6eb1" />

