# CampusMap Node Software

Includes all libraries and code for the CampusMap Node hardware. Written in C++.

# Development

## Architecture

1. POST all sensors and interfaces;
2. Connect to Internet over Wi-Fi (locally stored credentials (?));
3. Check for updates (if latest > local, download and reboot, jump to step **1**);
4. Authenticate with Cloud service;
5. Collect sensor data;
6. Publish sensor data;
7. Recieve any instructions (?);
8. Jump to step **5**;

## Requirements

### Board Setup

- Arduino IDE ([Download](https://www.arduino.cc/en/software))
- Arduino IDE ESP32 Board Support ([Instructions](https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md)) - *Make sure to use the **Development** release JSON, and board package v1.0.5-rc4 or later*
- SiLabs CP2104 USB Driver ([Downloads Page](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers))

### Libraries

> [Useful reference.](https://github.com/espressif/arduino-esp32)

- DHT Sensor Library ([Link](https://www.arduino.cc/reference/en/libraries/dht-sensor-library/))
- [WiFiClientSecure](https://github.com/espressif/arduino-esp32/tree/master/libraries/WiFiClientSecure)
- [ArduinoJson](https://arduinojson.org/)
- [Firebase ESP32 Client](https://github.com/mobizt/Firebase-ESP32)

## Setup

Connect the ESP32 Feather to your computer over USB. Select "*Adafruit ESP32 Feather*" as your **board**. Select the corresponding **port**. Verify and upload sketch.