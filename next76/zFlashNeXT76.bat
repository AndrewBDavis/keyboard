cd C:\tmk_keyboard\dfu-programmer

dfu-programmer.exe atmega32u4 erase --force

dfu-programmer.exe atmega32u4 flash C:\tmk_keyboard\keyboard\next76\next76.hex

dfu-programmer.exe atmega32u4 reset