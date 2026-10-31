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

##  Bill of Materials (BOM)

## Bill of Materials (BOM)

| # | Component | Description / Function | Qty | Unit Price | Total | Vendor |
| :-: | :--- | :--- | :-: | :-: | :-: | :--- |
| **1** | **Seeed Studio XIAO ESP32–C3** | Main MCU running logic, Wi-Fi & BLE | 1 | $6.80 | $6.80 | [Robu.in](https://robu.in/product/seeed-studio-xiao-esp32c3-tiny-mcu-board-with-wi-fi-and-ble-battery-charge-supported-power-efficiency-and-rich-interface/) |
| **2** | **0.96" I2C OLED Display (SSD1306)** | 128×64 screen for animated face & UI | 1 | $2.00 | $2.00 | [Robu.in](https://robu.in/product/0-96-inch-i2c-iic-4pin-oled-display-module-black/) |
| **3** | **GY-521 MPU-6050 6-DOF IMU** | 3-axis gyro + accelerometer for motion detection | 1 | $1.60 | $1.60 | [Robu.in](https://robu.in/product/mpu-6050-gyro-sensor-2-accelerometer/) |
| **4** | **DHT11 Sensor Module (3-pin)** | Temperature and humidity sensing | 1 | $1.00 | $1.00 | [Robu.in](https://robu.in/product/dht11-digital-relative-humidity-temperature-sensor-module/) |
| **5** | **6×6×5mm Tactile Buttons (5-pack)** | Physical buttons for feeding & menu action | 1 | $0.30 | $0.30 | [Robu.in](https://robu.in/product/6x6x5mm-tactile-push-button-switch/) |
| **6** | **INMP441 MEMS I2S Microphone** | Digital audio capture for sound/voice commands | 1 | $1.80 | $1.80 | [Robu.in](https://robu.in/product/inmp441-mems-high-precision-omnidirectional-microphone-module-i2s/) |
| **7** | **3.7V 500mAh 1S LiPo Battery** | PCM protected cordless power pack | 1 | $3.50 | $3.50 | [Robu.in](https://robu.in/product/500mah-pcm-protected-micro-li-po-battery/) |
| **8** | **0805 SMD 0.1 µF Ceramic Capacitors** | Rail decoupling filters for MCU & mic (10-pack) | 1 | $0.20 | $0.20 | [Robu.in](https://robu.in/product/100nf-0805-surface-mount-multilayer-ceramic-capacitor-pack-of-40/) |
| **9** | **1×40 Pin 2.54 mm Male Header Strip** | Breakaway pins for module mounting | 1 | $0.15 | $0.15 | [Robu.in](https://robu.in/product/1x40-pin-2-54-pitch-male-berg-strip/) |
| **10** | **SmartElex MAX98357A I2S Amplifier** | 3W Class-D digital amplifier for voice output | 1 | $2.00 | $2.00 | [Robu.in](https://robu.in/product/smartelex-i2s-audio-breakout-max98357a/) |
| **11** | **INGHAi 30mm 8Ω 0.5W Mini Speaker** | Compact speaker for sound effects & chirps | 1 | $2.00 | $2.00 | [Robu.in](https://robu.in/product/gspk3005tn-8r0-5w-inghai-d30h5-0mm-round-8-ohm-0-5w-85-3db/) |
| — | **Taxes & Shipping** | Estimated shipping and handling | — | — | $2.70 | Robu.in |
| — | **Total Project Cost** | **Tier 1 Grant Funding Budget** | — | — | **$24.05** | — |
---

## ⚡ Circuit & PCB Design

### Schematic
<img width="592" height="537" alt="Screenshot 2026-10-19 130543" src="https://github.com/user-attachments/assets/a9173b81-e6e8-43bd-b09f-8bfdadb0440d" />
<img width="1035" height="482" alt="Screenshot 2026-10-19 142150" src="https://github.com/user-attachments/assets/332fc0ec-5f6d-4258-be93-f8e05c80058b" />


I HAVE A BUZZER THATS WHY I DIDNT ADD IT IN BOM AND ALSO I WILL BE USING SPEAKERS MAINLY 


## Repository Structure
- `bom.csv`: Bill of Materials for grant verification
- `journal.md`: Daily progress logs and build documentation
- `pcb/`: KiCad schematic and layout files
- `firmware/`: ESP32-C3 source code
