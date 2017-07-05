LedControl
==========
LedControl is an [Arduino](http://arduino.cc) library for MAX7219 and MAX7221 Led display drivers.
The code also works with the [Teensy (3.1)](https://www.pjrc.com/teensy/)

Modified by Jack Zimmermann for supporting hardware SPI using the predefined MOSI and SCK pins on supported devices.

Further improved performance by Vincent Fischer avoiding slow Arduino functions by using direct port manipulation. Additionally, every standard ASCII symbol that can be expressed in 7 (or 8) segments can be used now.



This is a modified version using hardware SPI calls instead of bit banging. Speed increase is 20x or greater.

Usage
-----
You need to use the assigned hardware SPI pins on your Arduino. See table for correct pins. Some Arduinos doesn't have the SCK pin so this library won't work on those. The Chip Select(csPin) can be any pin you like, except one of the aforementioned pins. The new initialisation only needs the csPin and number of devices.
**LedControl::LedControl(int csPin, int numDevices)**

Pin Assignments
---------------

| Arduino Board | MOSI | MISO | SCK | SS (Slave) | SS (Master) |
|---------------|------|------|-----|------------|-------------|
| Uno or Duemilanove | 11 or ICSP-4 | 12 or ICSP-1 | 13 or ICSP-3 | 10 | - |
| Mega1280 or Mega2560 | 51 or ICSP-4 | 50 or ICSP-1 | 52 or ICSP-3 | 53 | - |
| Leonardo | ICSP-4 | ICSP-1 | ICSP-3 | - | - |
| Due | ICSP-4 | ICSP-1 | ICSP-3 | - | 4, 10, 52 |
| Deek-Robot Arduino | 11 | 12 | 13 | - | 10 |	
| Pro / Pro Mini     | 11  | 12  | 13 | - | 14

Documentation
-------------
Documentation for the (original) library is on the [Github Project Pages](http://wayoda.github.io/LedControl/)

Install
-------
The library can be installed using the [standard Arduino library install procedure](http://arduino.cc/en/Guide/Libraries)  







