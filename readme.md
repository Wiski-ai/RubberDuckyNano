# RubberDuckyNano 🦆

A compact and high-performance Rubber Ducky / BadUSB tool powered by the **Arduino Nano ESP32**. This project allows for automated keystroke injection (DuckyScript execution) via the micro-controller's native USB HID emulation.

---

## 🚀 Features
- **Native USB HID Emulation:** Instantly recognized as a standard USB keyboard by the host machine.
- **DuckyScript Support:** Fast and automated execution of custom keystroke scripts.
- **Wireless Connectivity:** Leverages the ESP32-S3 chip capabilities for remote management or configuration (Wi-Fi / Bluetooth).
- **Compact Form Factor:** Built on the reliable and tiny Arduino Nano ESP32 hardware.

---

## 🧰 Prerequisites & Hardware
* 1x **Arduino Nano ESP32**
* 1x Quality USB-C cable (data-transfer capable)

---

## ⚙️ Installation & Setup Guide

### 1. Environment Setup (Arduino IDE)
1. Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
2. Add the official ESP32 board manager URL in your IDE preferences:
   `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
3. Navigate to **Tools > Board > Boards Manager**, search for `esp32` by Espressif Systems, and install it.
4. Select your board as **Arduino Nano ESP32**.

### 2. Clone the Repository
```bash
git clone https://github.com/Wiski-ai/RubberDuckyNano.git
cd RubberDuckyNano
```

### 3. Compilation and Upload
1. Connect your **Arduino Nano ESP32** to your computer via USB.
2. Select the correct COM port under **Tools > Port**.
3. Open the project sketch, install any missing required libraries (such as USBHID dependencies if needed), and click **Upload**.

---

## 📖 Usage
1. Configure your payloads or script behavior within the code structure.
2. Plug the device into the target machine to execute the automated sequences.

---

## ⚠️ Legal Disclaimer
> **Disclaimer:** This project is intended strictly for educational purposes, authorized security testing (penetration testing), and personal task automation. Deploying this tool against target systems without explicit, prior permission from the system owner is illegal. The author and contributors assume no liability for any misuse or damage caused by this software.

---

## 🤝 Contributing
Contributions, issues, and feature requests are welcome! Feel free to check out the [issues page](https://github.com/Wiski-ai/RubberDuckyNano/issues).

## 📄 License
Distributed under the MIT License. See `LICENSE` for more information.