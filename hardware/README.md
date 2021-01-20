# CampusMap Node Hardware

Includes all bill of materials (BOM), 3D printing files, schematics, manufacturing and assembly instructions, etc. for the CampusMap Node hardware.

## Design Requirements

Tiered design:
- **Tier 0** (Default) - Mains power and WiFi available
- **Tier 1** (Outdoors) - No power, has WiFi
- **Tier 2** (Fully Remote) - No power or WiFi

Microcontroller:
- Wi-Fi and Bluetooth connectivity
- Camera support
- Low cost
- Popular; many open-source libraries available

Sensors and Power:
- **(1)** Lithium polymer battery and charging circuit
- Wall plug AC/DC power supply
- **(1)** Solar panel
- **(1/2?)** GPS for device location 
- **(2)** 4G module+SIM card
- Microphone
- Temperature sensor
- Humidity sensor
- Air quality sensor
- ...

## Documentation

Documentation for BOM parts can be found on each part's DigiKey page under "Datasheet".

# Development

BOM downloaded from [DigiKey](https://www.digikey.ca). 3D model files are made using [AutoDesk Fusion 360](https://shop.prusa3d.com/en/3d-printers/181-original-prusa-i3-mk3s-3d-printer.html). GCODE files are for the [Prusa MK3S](https://shop.prusa3d.com/en/3d-printers/181-original-prusa-i3-mk3s-3d-printer.html).

## Requirements

- Fusion 360 or your 3D editor of choice
- EasyEDA or your PCB/schematic editor(s) of choice
- Excel/Google Sheets or your CSV reader/spreadsheet analysis tool of choice