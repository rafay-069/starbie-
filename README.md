# Starbie 

A 3D-printed Yeti desktop companion robot powered by an ESP32-C3 microcontroller, featuring interactive animations, environmental monitoring, voice response, and an I2S audio amplifier setup i was inspired by jarvis from ironman so instead of making it simple starie i made changes i wanted to be more creative 

## Hardware Components
- Seeed Studio XIAO ESP32-C3
- 0.96" I2C OLED Display (SSD1306)
- GY-521 MPU-6050 6-DOF Motion Sensor
- SmartElex MAX98357A I2S Amplifier Breakout
- 30mm 8 Ohm 0.5W Mini Speaker
- INMP441 MEMS I2S Microphone
- DHT11 Temperature & Humidity Sensor
- 3.7V 500mAh 1S LiPo Battery
- ## MY CIRCUIT 
<img width="667" height="585" alt="Screenshot 2026-10-10 215116" src="https://github.com/user-attachments/assets/4be15831-2f63-44eb-b816-3276f5a94a47" />

## 📋 Bill of Materials (BOM)

| # | Component | Specifications / Package | Qty | Function |
| :-: | :--- | :--- | :-: | :--- |
| 1 | **Seeed Studio XIAO ESP32-C3** | RISC-V SoC, Wi-Fi & BLE | 1 | Main Microcontroller |
| 2 | **0.96" I2C OLED Display** | 128×64, SSD1306 Driver | 1 | Face / Expressions Display |
| 3 | **GY-521 MPU-6050** | 6-DOF IMU (I2C) | 1 | Motion & Gesture Sensing |
| 4 | **SmartElex MAX98357A** | I2S Audio Amplifier Breakout | 1 | Sound & Voice Output Amp |
| 5 | **Mini Speaker** | 30mm, 8Ω, 0.5W | 1 | Audio & Voice Speaker |
| 6 | **INMP441 MEMS Microphone** | I2S Omnidirectional Mic | 1 | Voice Input / Command Capture |
| 7 | **DHT11 Sensor** | 3-Pin / 4-Pin Module | 1 | Temperature & Humidity Sensing |
| 8 | **1S LiPo Battery** | 3.7V, 500mAh | 1 | Internal Portable Power |
| 9 | **Starbie Carrier PCB** | Custom 2-Layer FR4 | 1 | Main Component Carrier Board |

---

## ⚡ Circuit & PCB Design

### Schematic
<img width="592" height="537" alt="Screenshot 2026-10-19 130543" src="https://github.com/user-attachments/assets/a9173b81-e6e8-43bd-b09f-8bfdadb0440d" />

I HAVE A BUZZER THATS WHY I DIDNT ADD IT IN BOM AND ALSO I WILL BE USING SPEAKERS MAINLY 


## Repository Structure
- `bom.csv`: Bill of Materials for grant verification
- `journal.md`: Daily progress logs and build documentation
- `pcb/`: KiCad schematic and layout files
- `firmware/`: ESP32-C3 source code
