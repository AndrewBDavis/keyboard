#include "keymap_common.h"

/*
cd /mnt/c/tmk_keyboard/keyboard/alps66/v1
make clean
make
*/

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {

	[0] = KEYMAP( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,  BSLS,NO,  	INS,	\
        TAB, 	Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,   BSPC,	DEL, \
        LCTL,	  A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,	    	 ENT,		\
        LSFT,  NO,	Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,    RSFT,	  UP,  	\
        FN2,LGUI,LALT,			SPC,			    RALT, FN1, FN2,		LEFT,DOWN,RGHT
	   ),
	   
	[1] = KEYMAP( \
        GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, TRNS,NO,	TRNS, \
        CAPS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP,PGDN,	 PGUP,	TRNS, \
        TRNS,	 VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,LEFT,RGHT,  	 PENT, 		 \
        TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, END,DOWN,    TRNS,	TRNS, 	 \
        TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,		TRNS,TRNS,TRNS
	   ),
	   
	[2] = KEYMAP( \
        TRNS,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO, 	 TRNS, \
        TRNS,   TRNS,  UP,TRNS,TRNS,TRNS,TRNS,TRNS,  P7,  P8,  P9,TRNS,TRNS,  TRNS,	 TRNS, \
        TRNS,	  LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,  P4,  P5,  P6,TRNS,  	   TRNS, 		  \
        TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P1,  P2,  P3,    SLSH,	 TRNS, 	  \
        TRNS,TRNS,TRNS,          TRNS,                	TRNS,P0,PDOT,		 TRNS,TRNS,TRNS
	   ),
};

const action_t fn_actions[] PROGMEM = {
	[1]  = ACTION_LAYER_MOMENTARY(1),
	[2]  = ACTION_LAYER_MOMENTARY(2),
};