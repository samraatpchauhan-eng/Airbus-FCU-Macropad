# Airbus FCU-Macropad

Airbus-FCU is a scaled replica of the Flight Control Unit found on Airbus aircraft, such as the Airbus A320. It is powered by a **RP Pico 1**, which has the rp2040 chip. It is used to make workflows more efficient, and to convert your desktop into a virtual cockpit! I designed it because as an aviation enthusiast, I wanted to have the ability to integrate aspects of flight and aviation in my day to day life, and I thought that instead of using a generic macropad, why not have it look like the FCU found on the airbus a320!

## Features:
* **Custom Layout:**  6 Cherry MX switches and 4 ec11 switched rotary encoders (10 Keys Total).
* **Quad Encoders:** Quad EC11 Encoders for precise, media adjustments (like brightness, zooming, or volume).
* **Realistic Design:** Engineered with a precise layout matching the real FCU found on the A320, and coordinating most commonly used inputs for an easy to use layout.
* **RP2040 Power:** Driven by the RP2040 chip for rapid response times and effortless flashing.

---

## CAD Model & Case Assembly
Everything fits together precisely using a layered enclosure design. The case includes structural mounting points for the PCB, plates, and components to ensure zero deck-flex during heavy use. Please note the keycaps used in these renders are generic .STEP models downloaded from the internet, and any standard MX keycap should work.

### Case Assembly & Fitment
*An isometric 3D CAD visualization highlighting how the PCB, switches, encoders, and structural enclosure layers interface together seamlessly.*

<img width="3840" height="3072" alt="Airbus-FCU-Case_2026-Jul-02_07-37-07PM-000_CustomizedView3551822146" src="https://github.com/user-attachments/assets/b9493d78-ed8a-4e9b-a8c3-b9b7b3ca5344" />

<img width="3840" height="3072" alt="Airbus-FCU-Case_2026-Jul-02_07-30-18PM-000_CustomizedView15151844348" src="https://github.com/user-attachments/assets/a56effec-dbf5-4439-b755-2c28c5b1ae35" />

*Designed completely from scratch in Autodesk Fusion 360.*

---

## PCB Design
The underlying electronics were engineered in KiCad. The board features clean routing paths optimized for the RP2040 pin configurations and a direct connection layout to handle both the key switches and rotary encoders.

### Schematic Design
*The underlying circuit schematic mapping the switch routing, and dual encoder connections to the microcontroller.*

<img width="937" height="407" alt="Screenshot 2026-07-01 002244" src="https://github.com/user-attachments/assets/c0c4eac6-b3e0-4bae-b109-62e244645171" />

### PCB Layout Architecture
*The routed printed circuit board design detailing trace paths, footprints, and physical alignment.*

<img width="1406" height="659" alt="Screenshot 2026-07-01 002346" src="https://github.com/user-attachments/assets/437b5573-30ac-411f-953a-025da7ccbbf4" />

---

## How to Flash
1. Disconnect the USB cable from the Flight Pad.
2. Press and hold the physical **BOOT** button on the RP2040 controller board.
3. Reconnect the USB cable while holding the button, then release it.
4. A virtual drive named will mount to your operating system.
5. Drag and drop the `airbus_fcu_macropad_default.uf2` binary file directly onto the root of the drive.
6. The device will automatically flash, reboot, and initialize as an operational HID keyboard device.

---

## AI Attribution Note
**Please Note that AI was utilized to format this .README file, aswell as some basic project planning and debugging of the Keyboard.JSON, and Keymap.C files in VS.Code**
