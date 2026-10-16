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

## Repository Structure
- `bom.csv`: Bill of Materials for grant verification
- `journal.md`: Daily progress logs and build documentation
- `pcb/`: KiCad schematic and layout files
- `firmware/`: ESP32-C3 source code
