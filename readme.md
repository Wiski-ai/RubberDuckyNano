# RubberDuckyNano 🦆

RubberDuckyNano is a compact USB HID device based on the Arduino Nano ESP32, designed to emulate a keyboard and automate actions on a target machine. This project is a practical, customizable implementation inspired by the Rubber Ducky / BadUSB concept, with a focus on portability, ease of use, and open experimentation.

The repository includes the Arduino source code, a hardware schematic, a 3D printable enclosure, and a ready-to-use example payload that demonstrates keyboard injection behavior.

---

## Overview

This project aims to create a small, self-contained device that can:

- appear as a standard USB keyboard to the host computer
- wait for a trigger signal
- automatically send keystrokes and commands
- run customized payloads for keyboard automation
- be enclosed in a compact physical case for practical use

It is built around the Arduino Nano ESP32 platform and uses the USB HID keyboard emulation capabilities available with the ESP32 environment.

---

## Features

- Native USB keyboard emulation
- Trigger-based execution using a physical input pin
- DuckyScript-style keystroke automation
- Example payload demonstrating command execution on Windows
- Compact hardware design
- 3D-printable enclosure and hardware documentation
- Easy customization for user-defined payloads

---

## Hardware

### Required components

- 1x Arduino Nano ESP32
- 1x USB-C cable with data transfer capability
- 1x push-button or trigger input (optional, depending on the payload design)
- Breadboard / soldered connections if needed
- 3D-printed enclosure (optional but included in the repo)

### Included in the repository

- Arduino sketch: `Code arduino/RubberDucky_Code-exemple.ino`
- Schematic: `Shematic/Shematic.png`
- Enclosure models: `Case_Model/CaseRBup.step`, `CaseRBup.f3d`, `CaseRBdown.step`, `CaseRBdown.f3d`
- Visual assets: `Components img/`

---

## How it works

The example sketch:

1. initializes USB HID and keyboard emulation
2. waits for the trigger pin to be pressed
3. opens the Windows Run dialog
4. launches `cmd`
5. triggers an elevated PowerShell command
6. downloads a remote archive or payload
7. extracts it and closes the terminal

This example is intended as a demonstration of the concept and can be modified to fit your own usage scenario.

---

## Repository structure

```text
RubberDuckyNano/
├── .gitattributes
├── LICENSE
├── readme.md
├── Code arduino/
│   └── RubberDucky_Code-exemple.ino
├── Shematic/
│   └── Shematic.png
├── Case_Model/
│   ├── CaseRBdown.f3d
│   ├── CaseRBdown.step
│   ├── CaseRBup.f3d
│   └── CaseRBup.step
├── Components img/
│   └── (component images and references)
└── ...
```

> Note: the folder is named `Shematic` in the repository as originally created. The project content is the same as a schematic/design folder.

---

## Installation and setup

### 1. Install Arduino IDE

Download and install the Arduino IDE from:

https://www.arduino.cc/en/software

### 2. Add the ESP32 board manager

In Arduino IDE preferences, add this URL:

```text
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
```

Then go to:

- Tools > Board > Boards Manager
- Search for `esp32`
- Install the Espressif ESP32 package

### 3. Select the correct board

In the IDE, select:

- Board: `Arduino Nano ESP32`
- Port: the serial port assigned to your device

### 4. Open the sketch

Open:

- `Code arduino/RubberDucky_Code-exemple.ino`

### 5. Compile and upload

- Connect the Nano ESP32 to the computer
- Select the correct COM/serial port
- Upload the sketch

---

## Example usage

Once uploaded:

1. Connect the device to the target machine
2. Trigger the payload using the configured button or logic
3. The device will emulate keyboard input and execute the programmed sequence

This project is intended for experimentation, automation, and educational use in a controlled environment.

---

## Customization

The Arduino sketch is intentionally simple and easy to adapt. You can modify:

- trigger behavior
- keystroke timing and delays
- commands and payload sequence
- target operating system behavior
- downloaded payloads or scripts

If you want to adapt it to a specific scenario, the main logic is concentrated in the `runPayload()` function.

---

## Safety and legal notice

This project is intended strictly for:

- educational purposes
- authorized security testing
- penetration testing with explicit permission
- legitimate automation tasks

It must not be used for unauthorized access, malicious activity, or any action that violates the law or the rights of others.

---

## Contributing

Contributions, improvements, issue reports, and feature requests are welcome.

You can open an issue or propose changes via the GitHub repository.

---

## License

This project is distributed under the MIT License. See the `LICENSE` file for details.

---

## Project status

This repository currently contains:

- a working Arduino-based USB HID example
- a hardware schematic
- a printable enclosure design
- a proof-of-concept automated payload example

It is suitable as a base for further development, customization, and hardware experimentation.

---

## Quick summary

RubberDuckyNano is a compact ESP32-powered keystroke injection device with a custom enclosure, a hardware schematic, and an example payload for automated Windows command execution. It is designed to be open, educational, and easy to extend.
