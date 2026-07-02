 - 6/28/2026
    - Time Spent: 4 hrs 18 min
    - General Overview: Started planning out and designing the PCB for the Airbus-FCU macropad. I utilized Fly-By-Wire's extensive diagram on their website as reference, and KiCad to design the pcb. The pcb will house 4 EC11 rotary encoders with a switch, and 6 cherry MX switches, which are all powered by a RP Pico. The firmware will most likely come from QMK MSYS, or MobiFlight, and utlizing the FBW A32NX API.
    - Challenges Faced: Had to spend alot of time remapping and ensuring that all the tracks for the PCB lay out properly. I also had to factor in hardware placement, ensuring it stays accurate to the real FCU. I initially also was planning to use the Epal Arduino mega 2560 pro mini clone, but ended up going into a rabbit hole trying to find and create a custom footprint that is accurate to the real board, so I ended up using the RP Pico 1.
  
    - Media:

      Schematic Diagram
      <img width="937" height="407" alt="image" src="https://github.com/user-attachments/assets/17c6f971-d8fe-46c7-9aa5-8c17a1f98289" />

      PCB diagram with tracks layed out without intersection (finally lol)
      <img width="1406" height="659" alt="image" src="https://github.com/user-attachments/assets/6acf2f57-6fcf-49ae-a4cc-3bfd1497a52e" />
  
      Just a couple of 3d renderings of the PCB aswell :)
      <img width="1182" height="920" alt="Screenshot 2026-07-01 002633" src="https://github.com/user-attachments/assets/3bf68a04-fe0b-4460-b1a4-8e1dd2b46ec6" />
      <img width="1300" height="698" alt="Screenshot 2026-07-01 002624" src="https://github.com/user-attachments/assets/d63d67f1-3058-4d86-90f6-2fb9b0ef2124" />
      <img width="1333" height="698" alt="image" src="https://github.com/user-attachments/assets/b69e3b0f-8a5c-4692-ac5e-22ac89f7406a" />
  
      Layout of the FCU for the airbus a320 (do note I won't be including the 2 displays due to the RP Pico limitations, and space in the case)
      <img width="1061" height="410" alt="image" src="https://github.com/user-attachments/assets/a8b63807-6718-47cf-a067-5c4ba66fcda5" />
<hr background color: #FFFFFF>

- 6/30/2026
    - Time Spent: 5 hrs
    - General Overview: This was probably one of the harder, more creative days. I spent tody mainly formulating a case design, and how all the hardware will fit inside it. I also took today to conceptualize the function of each switch and encoder if it were to be used outside the flight sim, as a regular macropad. I decided to assign the rotary encoders to the following:
      
      - Volume / Mute Toggle
      - Brightness / Sleep PC
      - Zoom In-Out / Reset Zoom
      - Horizontal Nav & Scrolling / Pause or Play Toggle
        
    - And I decided to assign the buttons to the following:
      
      - Mute Mic
      - Media Next Track
      - Media Previous Track
      - Pause / Play Toggle
      - Undo
      - Redo
        
    - Challenges Faced: The hardest part of today was definitely figuring out the function of each input device, aswell as accurately mapping out each hole cutout for the top plate in Autodesk Fusion360 (goated CAD program btw). It was also pretty difficult getting the RP pico to fit in the case as I decided to leave a hole cutout to be able to view the board from the outside. I would say I spent the most time troubleshooting the physical fitment of the pcb, input devices and case design together.
    - Media:

      This is basically how the layout will work for the top plate, with the nice addition of a clear view of the RP Pico, with a neat engraving on top
      <img width="1763" height="1000" alt="image" src="https://github.com/user-attachments/assets/b1163ba6-d967-4c5f-b179-1acfdd1495e9" />
 
      This is the bottom section of the case. It's currently a plain box, but overtime I do plan to refine it into something more complete, and refined
      <img width="2554" height="1256" alt="image" src="https://github.com/user-attachments/assets/de3c38a3-8ff3-42f6-9b13-3eb02327239b" />
<hr background color: #FFFFFF>

 - 6/28/2026
    - Time Spent: 2 hrs 24 min
    - General Overview: I decided to take today a little bit easy today, to avoid stressing out and losing my sanity from yesterday's design session. I researched alot upon how MobiFlight works with Microsoft Flight Simulator 2020 (this is the sim I have currently), and the process to develop firmware and flash it onto the RP board. I also went over QMK's API to gather which keystrokes to use. I also decided to utlize VS.Code as my text editor, as I'm most familiar with it, and it works well with Hackatime.
    - Challenges Faced: Not many, however I had to get used to MobiFlight's refreshed user interface. They moved away from the traditional text editor style, and towards a more user friendly mouse pointer interactive UI.
  
    - Media:
      The new and improved UI for MobiFlight did introduce a bit of a learning curve, as they changed out alot of thing, such as where you can add boards, and the process of adding inputs and outputs
      <img width="1010" height="655" alt="image" src="https://github.com/user-attachments/assets/411f49d5-cf92-4995-bfff-754aee9f67a7" />
  
      This is a general overview of the keybinds and keycodes. I did change the Undo and Redo buttons to Copy Paste, as that is more commonly used
      <img width="1536" height="859" alt="image" src="https://github.com/user-attachments/assets/9e75cd56-18ff-4896-8fbb-490e0b235e9c" />
<hr background color: #FFFFFF>

- 7/1/2026
    - Time Spent: 3 hrs 45 min
    - General Overview: I jumped back into the grind today, but wasn't able to send too much time as I had a dentist appointment aswell. I did however finish up polishing the design of the case, and was able to get it looking complete, with nice rounded edges, and neat engravings to label each input device. I also started developing the firmware for the FCU, by utlizing QMK MSYS and VS.Code. I finished up the keyboard.json file, but am yet to complete the keymap.c file, as that will require careful matching, and good focus. I decided to hold that off for tomorrow morning.
    - Challenges Faced: I made quiet a stupid mistake. As I was writing up the json file for the FCU firmware, I realized I had completely forgotten to map the "b" pin for one of the rotary encoders. I had to go back into KiCad, and a) Wire up the b pin to a digital pin on the board; and b) re-layout all the tracks in the PCB editor to account for the missing connection. I also faced a problem when creating the engravings in Fusion360. I tried to used the extrude tool to engrave the text which was made out of a "sketch" however the font I wanted to use had too many overlaps and gave geometry errors. I ended up going with a simpler font, to compensate.
  
    - Media:

      This is the finalized design for the case. I'm really happy with how it turned out, as it's detailed while maintaining a minimal asthetic that I always dig, and had nice subtle round edges all around
      <img width="2557" height="1255" alt="image" src="https://github.com/user-attachments/assets/ac691c9c-63f8-40cc-8bca-26cae7c23156" />
      <img width="1493" height="920" alt="image" src="https://github.com/user-attachments/assets/f288a80d-0c2e-41cb-95ad-efee4ff97994" />
      
      Due to my laziness :) I had to go back and add the extra connection for EC8_B, and revise the track layout for the actual PCB 
      <img width="1307" height="719" alt="Screenshot 2026-07-01 225254" src="https://github.com/user-attachments/assets/ce547bfc-3172-4ae2-8597-baea0123e9bf" />
      <img width="1097" height="520" alt="Screenshot 2026-07-01 225231" src="https://github.com/user-attachments/assets/c4140c30-acaf-454b-8bd2-b9792061739b" />
<hr background color: #FFFFFF>

 - 7/2/2026
    - Time Spent: 3 hrs 18 min
    - General Overview: Last day! I spend today finalizing the case, and writing up the rest of my firmware, and compiling it to get the .uf2 file. I also spent alot of time gathering screenshots, data, and cad/pcb exports to put into my git repo. I also wrote up my .readme file, and obviously this journal entry. Thankfully I did have a few parts in my spare electronics bin to visualize what it could look like.
    - Challenges Faced: There weren't many challenges today, except for some errors I encountered when compiling the firmware, as I kept using what I thought was the correct keycode naming scheme, but I was able to fix it later on.
  
    - Media:

      Final Airbus-FCU render
      <img width="3840" height="3072" alt="Airbus-FCU-Case_2026-Jul-02_07-37-07PM-000_CustomizedView3551822146" src="https://github.com/user-attachments/assets/fb866b2e-a0c6-40a3-a4b1-6cb606347914" />
   
      Case Design
      <img width="3840" height="3072" alt="Airbus-FCU-Case_2026-Jul-02_07-24-20PM-000_CustomizedView7984582045" src="https://github.com/user-attachments/assets/572f363d-66e7-45f2-b43b-318594695e95" />
  
      Was able to find 4 ec11 encoders with knobs! :)
      <img width="2268" height="4032" alt="PXL_20260702_192811092" src="https://github.com/user-attachments/assets/b50fb21d-ad18-47e1-9ed9-9dc498bea907" />
<hr background color: #FFFFFF>
      


