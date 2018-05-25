cd C:\TMK\dfu-programmer-win-0.7.2 

dfu-programmer.exe atmega32u4 erase --force

dfu-programmer.exe atmega32u4 flash C:\TMK\keyboard\fc660c\fc660c.hex

dfu-programmer.exe atmega32u4 reset