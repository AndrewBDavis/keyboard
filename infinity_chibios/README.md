I REALLY DON'T KNOW WHAT I AM DOING BUT I GOT IT TO WORK

This is MUCH easier in Linux, please refer to this reddit post for instructions <https://redd.it/4grnfa> archived version -> <https://archive.is/hTo0G>

These instructions are for the user with the Windows 10 Bash on Ubuntu subsystem trying to compile TMK for the IC Infinity keyboard without LEDs. This is meant to be used in conjuction with https://github.com/AndrewBDavis/tmk_core_infinity

•Download [tmk_core_infinity](https://github.com/AndrewBDavis/tmk_core_infinity) and place it inside [tmk_keyboard](https://github.com/tmk/tmk_keyboard)

•Install gcc-arm-none-eabi if you have not already with the following line in Bash:

	sudo apt-get install gcc-arm-none-eabi

•If applicable, modify the config.h file by changing your debouce from the default of 5 and commenting out the line:

	#define INFINITY_PROTOTYPE
	
by changing it to 

	//#define INFINITY_PROTOTYPE
	
•If applicable, make sure that in the Makefile that TMK_DIR is set as 
	
	TMK_DIR = ../../tmk_core_infinity

•Once you have customized your keymap in keymap_plain.c (keymap_hasu.c is good for reference) then run the following commands to compile:

	cd tmk_keyboard/keyboard/infinity_chibios
	make -f Makefile clean
	make -f Makefile

•To flash the .bin file, you can use the kii-dfu software by Input Club
OR
•Download [dfu-util](https://sourceforge.net/projects/dfu-util/files/dfu-util-0.9-win64.zip/download) and place it inside [tmk_keyboard](https://github.com/tmk/tmk_keyboard) then the rename  the folder containing dfu-util.exe to

	dfu-util 
	
and run zFlash_Infinity.bat, just note that the defualt directory is C:\tmk_keyboard
