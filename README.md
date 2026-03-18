# Abstract-Macropad
The Abstract macropad is my submission for Hack Club Blueprint. It has a 3x3 keyboard with a rotary encoder, and an OLED display. It uses a Seeed XIAO RP2040 MCU and QMK firmware.

## Features
- 2-part 3D-printed case
- 9 Keys
- EC11 Rotary Encoder
- 128x32 OLED Display

## CAD

<img width="1059" height="752" alt="Screenshot 2026-03-10 143819" src="https://github.com/user-attachments/assets/d54234a1-3186-46a2-a8a1-9a1d67fc629e" />
<img width="695" height="573" alt="Screenshot 2026-03-10 144258" src="https://github.com/user-attachments/assets/9741120c-84a2-4570-8bd5-fd51175e6b8a" />

Modeled in Autodesk Fusion. The pieces will be secured together with 4 M3 heat set inserts and screws.

## PCB
This was made in KiCad.

Schematic:

<img width="1189" height="803" alt="Screenshot 2026-03-08 191202" src="https://github.com/user-attachments/assets/6ba0e66b-b931-4f3f-b941-7f13eda93eb4" />

PCB:

<img width="865" height="850" alt="Screenshot 2026-03-08 191837" src="https://github.com/user-attachments/assets/873d3e7e-8255-439a-a322-d2c82d2ddece" />

## Firmware Overview
This macropad uses QMK firmware. The rotary encoder will change the volume and the OLED will display the text "Hello". Each of the keys has a different shortcut function.

## BOM
Materials required to make the Abstract:
- 1 Seeed XIAO RP2040
- 9x MX-Style switches
- 9x DSA Keycaps
- 10x THT 1N4148 diodes
- 1x EC11 Rotary Encoder
- 1x 0.91" 128x32 OLED Display
- 4x M3x16mm screws
- 4x M3x5mx4mm heatset inserts
