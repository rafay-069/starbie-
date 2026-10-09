#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Starbie ESP32-C3 Pin Definitions
#define PIN_BUZZER    2   // D0
#define PIN_DHT       3   // D1
#define PIN_BTN_MENU  4   // D2
#define PIN_BTN_WAKE  5   // D3
#define PIN_I2C_SDA   6   // D4
#define PIN_I2C_SCL   7   // D5
#define PIN_I2S_SCK   8   // D8
#define PIN_I2S_WS    9   // D9
#define PIN_I2S_SD    10  // D10

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  pinMode(PIN_BTN_MENU, INPUT_PULLUP);
  pinMode(PIN_BTN_WAKE, INPUT_PULLUP);
  pinMode(PIN_BUZZER, OUTPUT);

  Wire.begin(PIN_I2C_SDA, PIN_I2C_SCL);
  if (display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    display.clearDisplay();
    display.setTextColor(SSD1306_WHITE);
    display.setTextSize(1);
    display.setCursor(16, 28);
    display.println("STARBIE ONLINE");
    display.display();
  }

  // Startup chime
  tone(PIN_BUZZER, 1046, 100);
  delay(120);
  tone(PIN_BUZZER, 2093, 150);
}

void loop() {
  if (digitalRead(PIN_BTN_MENU) == LOW) {
    tone(PIN_BUZZER, 880, 50);
    delay(150);
  }
  if (digitalRead(PIN_BTN_WAKE) == LOW) {
    tone(PIN_BUZZER, 1760, 50);
    delay(150);
  }
  delay(10);
}
