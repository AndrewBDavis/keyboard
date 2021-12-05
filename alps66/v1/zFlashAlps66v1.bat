cd C:\tmk_keyboard\dfu-programmer

dfu-programmer.exe atmega32u2 erase --force

dfu-programmer.exe atmega32u2 flash C:\tmk_keyboard\keyboard\alps66\v1\alps66v1.hex

dfu-programmer.exe atmega32u2 reset