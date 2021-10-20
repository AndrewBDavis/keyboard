cd C:\tmk_keyboard\dfu-programmer

dfu-programmer.exe atmega32u4 erase --force

dfu-programmer.exe atmega32u4 flash C:\tmk_keyboard\keyboard\roadkit\roadkit.hex

dfu-programmer.exe atmega32u4 reset