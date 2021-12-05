cd C:\tmk_keyboard\dfu-programmer

dfu-programmer.exe atmega32u2 erase --force

dfu-programmer.exe atmega32u2 flash C:\tmk_keyboard\keyboard\alps66\alps66.hex

dfu-programmer.exe atmega32u2 reset