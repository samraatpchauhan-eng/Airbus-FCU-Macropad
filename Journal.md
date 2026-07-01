 - 6/28/2026
    - Time Spent: 3 hrs 18 min
    - General Overview: Started planning out and designing the PCB for the Airbus-FCU macropad. I utilized Fly-By-Wire's extensive diagram on their website as reference, and KiCad to design the pcb. The pcb will house 4 rotary encoders, and 6 cherry MX switches, which are all powered by a RP Pico. The firmware will most likely come from QMK MSYS, or MobiFlight, and utlizing the FBW A32NX API.
    - Challenges Faced: Had to spend alot of time remapping and ensuring that all the tracks for the PCB lay out properly. I also had to factor in hardware placement, ensuring it stays accurate to the real FCU. I initially also was planning to use the Epal Arduino mega 2560 pro mini clone, but ended up going into a rabbit hole trying to find and create a custom footprint that is accurate to the real board, so I ended up using the RP Pico 1.
  
    - Media:
      <img width="937" height="407" alt="image" src="https://github.com/user-attachments/assets/17c6f971-d8fe-46c7-9aa5-8c17a1f98289" />
      Schematic Diagram
      <img width="1406" height="659" alt="image" src="https://github.com/user-attachments/assets/6acf2f57-6fcf-49ae-a4cc-3bfd1497a52e" />
      PCB diagram with tracks layed out without intersection (finally lol)
      <img width="1182" height="920" alt="Screenshot 2026-07-01 002633" src="https://github.com/user-attachments/assets/3bf68a04-fe0b-4460-b1a4-8e1dd2b46ec6" />
      <img width="1300" height="698" alt="Screenshot 2026-07-01 002624" src="https://github.com/user-attachments/assets/d63d67f1-3058-4d86-90f6-2fb9b0ef2124" />
      <img width="1333" height="698" alt="image" src="https://github.com/user-attachments/assets/b69e3b0f-8a5c-4692-ac5e-22ac89f7406a" />
      Just a couple of 3d renderings of the PCB aswell :)
      <img width="1061" height="410" alt="image" src="https://github.com/user-attachments/assets/a8b63807-6718-47cf-a067-5c4ba66fcda5" />
      Layout of the FCU for the airbus a320 (do note I won't be including the 2 displays due to the RP Pico limitations, and space in the case)
<hr background color: #FFFFFF>
      


