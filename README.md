# NodeMCU tutorials

## :book: [NodeMCU ESP8266 Tutorial (deutsch)](http://www.mikrocontroller-elektronik.de/nodemcu-esp8266-tutorial-wlan-board-arduino-ide/)
## :warning: Die im Tutorial genannte Adresse für die Arduino-IDE-Voreinstellungen sollte bei Verbindungsfehlern gegen diese ausgetauscht werden:  [https://github.com/esp8266/Arduino/releases/download/2.4.1/package_esp8266com_index.json](https://github.com/esp8266/Arduino/releases/download/2.4.1/package_esp8266com_index.json)

## Content

:file_folder: `/arduino/` --> example programs (so called "sketches"), can be copied into your local `/Arduino/` directory

## Install Arduino IDE

Just follow these steps 1-4 to install arduino IDE on Windows: 

:book: [NodeMCU ESP8266 Tutorial](http://www.mikrocontroller-elektronik.de/nodemcu-esp8266-tutorial-wlan-board-arduino-ide/)

Step 5 (lua installation) isn't needed for C-programming and these tutorials.

If you have a proxy at home, school or company you have to set it - e.g. for networks with automatic proxy configuration:
![Proxy Settings](proxy-settings.jpg)

## Attach NodeMCU

Connect your NodeMCU ESp8266 board via USB - Windows will ask for installing some drivers.

Start your Arduino IDE after all drivers are installed.

## Set board and com port

Choose board model "NodeMCU ESP12E" and the com port of the serial to usb driver - mostly COM3 or - like in the example screenshot shown below - a higher com port.

![Board and com port settings](board-port-settings.jpg)
