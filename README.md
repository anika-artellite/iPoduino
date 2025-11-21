# iPoduino
A mini iPod-style sound player built with an ESP32, DFPlayer Mini, and two control buttons. The buttons handle play/pause and track skipping using pull-up inputs for stable reading, while the ESP32 communicates with the DFPlayer Mini over UART to play audio from the SD card.

Functions:
- Plays audio files stored on the SD card inside the DFPlayer Mini
- Button-controlled play/pause and track skipping
- Stable button input using pull-up resistors
- ESP32 communicates with DFPlayer Mini over UART
- Outputs sound through a small speaker module

Materials:
- 1 ESP-32 Microcontroller
- 1 DFPlayer Mini Module
- 1 Micro SD Card (for audio files)
- 1 Speaker Module
- 2 Push Buttons
- 2 Pull-up Resistors
- 1 Breadboard
- Jumper Wires
- 1 9V Battery
- Micro USB Cable
