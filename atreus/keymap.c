#include "keymap_common.h"
/*
cd /mnt/c/tmk_keyboard/keyboard/atreus
make
sudo avrdude -p atmega32u4 -c avr109 -U flash:w:atreus.hex -P /dev/ttyS4

/dev/ttyS4 refers to COMM Port 4, only applicable if using Bash Windows Subsystem for Linux

make clean
*/
const action_t PROGMEM fn_actions[] = {
	[1] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
	[2] = ACTION_LAYER_MOMENTARY(2),  // switch to layer 2
	[9] = ACTION_FUNCTION(BOOTLOADER)
};
  
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	/* layer 0 */	
KEYMAP(	
	Q,      W,    E,    R,    T,					Y,    U,    I,    O,    P, \
	A,      S,    D,    F,    G,	 				H,    J,    K,    L,  ENT, \
	Z,      X,    C,    V,    B, 					N,    M, COMM,  DOT, SLSH, \
	ESC,  TAB, MINS, LSFT, BSPC, LCTL,  	 LGUI,  SPC,  FN1, SCLN, QUOT, BSLS),
	
	/* layer 1 */	
KEYMAP(	
	GRV,     7,    8,    9,    0,				  LBRC, RBRC,   UP, TRNS,  DEL, \
	TRNS,    4,    5,    6, PSCR,	 			  HOME, LEFT, DOWN, RGHT, PGUP, \
	TRNS,    1,    2,    3, SLCK, 			   END,  INS, TRNS, TRNS, PGDN, \
	FN2,  CAPS, TRNS, TRNS, TRNS, TRNS,  	 LALT, TRNS, TRNS,  EQL, TRNS, TRNS),
	
	/* layer 2 */	
KEYMAP(	
	TRNS, TRNS, TRNS, TRNS, TRNS,					  F9,  F10,  F11,  F12, TRNS, \
	TRNS, TRNS, TRNS,  FN9, TRNS,					  F5,   F6,   F7,   F8, TRNS, \
	TRNS, TRNS, TRNS, TRNS, TRNS,					  F1,   F2,   F3,   F4, TRNS, \
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,	    LALT, TRNS, TRNS, TRNS, TRNS, TRNS),
	
	/* layer 3 */	
KEYMAP(	
	TRNS, TRNS, TRNS, TRNS, TRNS,					TRNS, TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS, TRNS, TRNS, TRNS,					TRNS, TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS, TRNS, TRNS, TRNS,					TRNS, TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,	    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
};



void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}
