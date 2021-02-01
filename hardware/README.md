# CampusMap Node Hardware

Includes all bill of materials (BOM), 3D printing files, schematics, manufacturing and assembly instructions, etc. for the CampusMap Node hardware.

## Design Requirements

Tiered design (tier 2 implies tier 1 parts):
- **Tier 0** (Default) - Mains power and WiFi available
- **Tier 1** (Outdoors) - No power, has WiFi
- **Tier 2** (Fully Remote) - No power or WiFi

Microcontroller Board - [Adafruit HUZZAH32 ESP32 Feather](https://www.adafruit.com/product/3405):
- Wi-Fi and Bluetooth connectivity
- Low cost
- Popular; many open-source libraries available

Power and Location:
- **(1)** Lithium polymer battery (~12Hr charge) ([Adafruit 2500mAh](https://www.adafruit.com/product/328))
- Wall plug AC/DC power supply ([Adafruit PSU 5V 2A](https://www.adafruit.com/product/276)) to MicroUSB ([Adafruit Barrel to MicroUSB](https://www.adafruit.com/product/2727))
- **(1)** Solar panel
- **(2)** GPS for device location ([Adafruit GPS Featherwing](https://learn.adafruit.com/adafruit-feather/gps-wing))
- **(2)** 4G module+SIM card ([Telus](https://iotshop.telus.com/ds/en/order))

Sensors:
- Microphone (Noise Levels) - [Adafruit 3421](https://www.adafruit.com/product/3421)
- Temperature and Humidity Sensor - [DHT22](https://www.adafruit.com/product/385)
- ~~Air quality sensor~~

## References

Documentation for BOM parts can be found on each part's DigiKey page under "Datasheet".

### Adafruit Feather HUZZAH32 ESP32

- [Pinout, Assembly, Power Management, Programming, etc.](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather)
- [CADs](https://github.com/adafruit/Adafruit_CAD_Parts/tree/master/3405%20ESP32%20Feather%20HUZZAH)
- [Schematics and PCB](https://github.com/adafruit/Adafruit-HUZZAH32-ESP32-Feather-PCB)

# Development

BOM downloaded from [DigiKey](https://www.digikey.ca). 3D model files are made using [AutoDesk Fusion 360](https://shop.prusa3d.com/en/3d-printers/181-original-prusa-i3-mk3s-3d-printer.html). GCODE files are for the [Prusa MK3S MMU2](https://shop.prusa3d.com/en/3d-printers/181-original-prusa-i3-mk3s-3d-printer.html) using *Prusament PETG* filament. Schematics and PCB files made using [EasyEDA](https://easyeda.com/).

## Requirements

- Fusion 360 or your 3D editor of choice
- EasyEDA or your PCB/schematic editor(s) of choice
- Excel/Google Sheets or your CSV reader/spreadsheet software of choice