# Starbie: Yeti J.A.R.V.I.S. Edition

An expressive desktop companion robot and PC voice automation assistant housed inside a custom 3D-printed Yeti figurine, designed for the **Hack Club Half-Life** hardware initiative.

![Board Dimensions](https://img.shields.io/badge/Dimensions-48.0%20mm%20%C3%97%2045.0%20mm-blue)
![Layers](https://img.shields.io/badge/Layers-2--Layer%20FR--4-green)
![DRC Status](https://img.shields.io/badge/DRC%20Errors-0%20Passed-brightgreen)
![Fabrication](https://img.shields.io/badge/Gerbers-Verified%20%26%20Exported-orange)

---

## 3D Render & Board Preview

| 3D Carrier Board & Clearance | 2D Routed Copper Layout (0 DRC Errors) |
| :---: | :---: |
| ![Starbie PCB 3D Render](./docs/pcb_3d_render.png) | ![Starbie PCB 2D Layout](./docs/pcb_layout.png) |

---

## 1. System Architecture

Starbie uses a hybrid architecture: a local **Seeed Studio XIAO ESP32-C3** handles real-time sensor polling, I2S digital audio sampling, and high-framerate OLED facial rendering, while streaming telemetry and voice intents over USB-C to the host computer for Whisper speech recognition and LLM inference.

```mermaid
flowchart TD
    subgraph Power ["Power Distribution (+3V3 / GND)"]
        USB["USB-C 5V Input"] --> U1["Seeed Studio XIAO ESP32-C3"]
        U1 -->|Regulated 3.3V Rail| BUS3V["+3V3 Power Bus (0.50 mm)"]
        BUS3V --> C1["0.1 µF Decoupling C1"]
        BUS3V --> J1["0.96-inch SSD1306 OLED"]
        BUS3V --> J2["GY-521 MPU-6050 IMU"]
        BUS3V --> J3["DHT11 Climate Sensor"]
        BUS3V --> C2["0.1 µF Decoupling C2"]
        BUS3V --> J4["INMP441 I2S MEMS Mic"]
    end

    subgraph I2C ["Shared Fast I2C Bus"]
        U1 -- "D4 (GPIO6) / SDA" --> J1
        U1 -- "D5 (GPIO7) / SCL" --> J1
        J1 -.-> J2
    end

    subgraph I2S ["Digital Audio Capture (I2S)"]
        U1 -- "D8 (GPIO8) / SCK" --> J4
        U1 -- "D9 (GPIO9) / WS" --> J4
        U1 -- "D10 (GPIO10) / SD" <-- J4
    end

    subgraph IO ["Physical Input & Environment Telemetry"]
        U1 -- "D0 (GPIO2) / PWM" --> BZ1["Piezo Buzzer (Audio Chimes)"]
        U1 -- "D1 (GPIO3) / 1-Wire" <--> J3
        U1 -- "D2 (GPIO4) / Input" <-- SW1["Button 1 (Menu / Mode)"]
        U1 -- "D3 (GPIO5) / Input" <-- SW2["Button 2 (Action / Wake)"]
    end
