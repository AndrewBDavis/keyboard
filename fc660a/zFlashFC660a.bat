cd C:\tmk_keyboard\dfu-programmer

dfu-programmer.exe atmega32u2 erase --force

dfu-programmer.exe atmega32u2 flash C:\tmk_keyboard\keyboard\fc660a\fc660a.hex

dfu-programmer.exe atmega32u2 reset