# Target file name (without extension).
TARGET = copam

# Directory common source filess exist
TMK_DIR = ../../tmk_core

# Directory keyboard dependent files exist
TARGET_DIR = .

# project specific files
SRC = keymap_common.c matrix.c	led.c

ifdef KEYMAP
    SRC := keymap_$(KEYMAP).c $(SRC)
else
    SRC := keymap.c $(SRC)
endif

CONFIG_H = config.h


# MCU name
MCU = at90usb1286

# Processor frequency.
F_CPU = 16000000


# Target architecture (see library "Board Types" documentation).
ARCH = AVR8

# Input clock frequency.
F_USB = $(F_CPU)

# Interrupt driven control endpoint task(+60)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT


# Boot Section Size in *bytes*
OPT_DEFS += -DBOOTLOADER_SIZE=4096


# Build Options
#BOOTMAGIC_ENABLE = no	# Virtual DIP switch configuration(+1000)
SLEEP_LED_ENABLE = no
MOUSEKEY_ENABLE = yes	# Mouse keys(+4700)
EXTRAKEY_ENABLE = yes	# Audio control and System control(+450)
CONSOLE_ENABLE = yes	# Console for debug(+400)
COMMAND_ENABLE = yes	# Commands for debug and configuration
#NKRO_ENABLE = yes#		# USB Nkey Rollover - not yet supported in LUFA


# Search Path
VPATH += $(TARGET_DIR)
VPATH += $(TMK_DIR)

include $(TMK_DIR)/protocol/lufa.mk
include $(TMK_DIR)/common.mk
include $(TMK_DIR)/rules.mk
