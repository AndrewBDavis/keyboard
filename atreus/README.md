# Atreus keyboard firmware

The [Atreus](https://atreus.technomancy.us) is a small mechanical
column-staggered ergonomic keyboard, usually built from a kit.

I have modified parts of [Technomancy's Atreus TMK firmware fork](https://github.com/technomancy/tmk_keyboard) to work with Hasu's original tmk_core files.
The layout should is now more easily configurable as all layers can be edited in the keymap.c file.  

This repository contains firmware (called TMK) loaded into its
controller to make the keyboard function. You can also use it to
customize its layout or behavior.

You only need to compile the code here if you want to make changes to
the layout. It's highly recommended that you do this at some point,
but maybe you're in a hurry and you just want to get started--in that
case you can use the Quick Start.

## Quick Start

Download one of the [precompiled firmwares](https://atreus.technomancy.us/download).

### Installing on Debian or Debian-based systems

    $ sudo apt-get install avrdude

### Installing on Mac OS X

If you have Homebrew:

    $ brew tap osx-cross/avr
    $ brew install avrdude

If you don't have Homebrew, use [Crosspack for AVR](https://www.obdev.at/products/crosspack/index.html).

### Uploading on Debian/Mac

You will need to determine the path to the USB device for the last argument:

    $ ls /dev > /tmp/dev-off # run this while the device is unplugged
    $ ls /dev > /tmp/dev-on # run this while the device is in bootloader mode
    $ diff /tmp/dev-off /tmp/dev-on # this will show the device path

You will need to enter bootloader mode to do this; see the "Reset" section below.

It is usually something like `/dev/ttyACM0` on Linux-based systems and
something like `/dev/cu.usbmodem1421` on Macs.

On Bash Windows Subsystem for Linux it is '/dev/ttySx' with the 'x' representing your COMM port

Replace `atreus.hex` here with the filename of whatever you downloaded
above. Reset the board and quickly run this command:

    $ avrdude -p atmega32u4 -c avr109 -U flash:w:atreus.hex -P /path/to/usb

It should emit a bunch of output followed by "avrdude done.  Thank you."

You shouldn't have to run these commands as root.
If the upload does not complete, check the permissions on the USB
device and ensure it's writeable by your user. You may need to run
`sudo make udev` on some Linux-based systems to install a udev rule if
another driver mistakenly takes control of the bootloader device.

Sometimes it can be tricky to get the timing right with the hard
reset; it can take a few attempts when you are first uploading the
firmware to a fresh board.

### Windows

Start by installing the A-Star drivers, as [documented by Pololu](https://www.pololu.com/docs/0J61/6.1).

You will need to determine the correct port setting by resetting the
controller and looking at the "Ports (COM & LPT)"
[section of the Windows Device Manager](https://a.pololu-files.com/picture/0J5272.500.png);
it should show up as "Pololu A-Star Micro 32U4" if you check within 8
seconds of initiating a reset.

Then install
[AVRDUDESS](http://blog.zakkemble.co.uk/avrdudess-a-gui-for-avrdude/)
and run it.

* pick "avr109" as the programmer
* select "ATmega32u4" from the MCU section in the upper left
* select the port in the upper left as found in the device manager
* choose the .hex file you downloaded
* reset the microcontroller so that the LED is gently pulsing
* press "go" under "flash"

## Reset

If this is your first time
[uploading firmware](http://www.pololu.com/docs/0J61/5.3), you will
have to *hard reset* by connecting the `RST` pin to ground twice in
under a second to jump to the bootloader. (This requires removing the
back panel.) They are the sixth and seventh pin down on the left-side
row of microcontroller pins. (Right side for older boards with the PCB
upside-down) If you idle in the bootloader for 8 seconds without
uploading, the controller will exit the bootloader and return to
normal operation.

If you've already got default atreus.hex file loaded on the controller, you
should have a key bound to reset; typically this is activated by
jumping to layer 2 (`fn`+`ESC`) and then hitting `B`. (`Enter` on
older versions of the firmware.) Again, we can reassign this key in our keymap.c file the FN0 keycode 

## Full Compile

If you want to customize the layout (and who doesn't?) you'll need the
full AVR compiler suite.

### Debian

    $ sudo apt-get install gcc-avr avr-libc

### Mac OS X

    $ brew install avr-gcc

If you already installed Crosspack above you should be fine.

### Windows

Install [WinAVR](http://winavr.sourceforge.net/).

### Layout

Copy `keymap.c` into a new file to create your new
layout, and change the `keymaps` array to place the keycodes you want
in the positions you want. The keycode 'FN9' will put the atreus in bootloader mode, It is recommended to 
keep this keycode somewhere on layer 0 until everything is final to ensure access to bootloader. 
You will need to create your own keymap, Technomancy's TMK fork contains lots of keymaps as a guide. 

### Compiling

The current design of the Atreus has the PCB installed with the
labeled side facing up. Older revisions had the labeled side facing
down. If you follow the instructions here and get the layout flipped
backwards, you have a board with the PCB facing down. You can switch this by navigating 
to the keymap_common.h file directory and commenting out the opposite #define KEYMAP(

## Teensy 2

This codebase defaults to targeting the most recent PCB-based design
of the Atreus which uses the A-Star microcontroller, but it can also
work with hand-wired boards that use the Teensy 2. If you have one
with a Teensy 2 then you will need to install the
[teensy loader](http://www.pjrc.com/teensy/loader_cli.html).

Uploading to a Teensy 2 can be done by uncommenting `OPT_DEFS=-DTEENSY in the makefile.  
Specifying the path to the USB device as per above is
unnecessary. Also getting to the bootloader on the Teensy is simpler;
if you can't do it in software simply press the hardware reset button
once.

## Alternatives

The default firmware for the Atreus used to be a
[custom codebase](https://github.com/technomancy/atreus-firmware)
which was a good deal simpler but less featureful. If you are
interested learning about how keyboard matrix scanning works or in
extending the codebase yourself beyond just creating new layouts, you
may be interested in that instead.

There is also the [Menelaus](https://github.com/technomancy/menelaus)
firmware, which is written in MicroScheme. Note that this is still not
very polished and intended more for educational purposes than anything else.
