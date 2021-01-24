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

- [Arduino IDE](https://www.arduino.cc/en/software)
- [ESP8266+Arduino IDE Setup Requirements](https://learn.adafruit.com/adafruit-feather-huzzah-esp8266/using-arduino-ide)