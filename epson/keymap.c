#include "keymap_common.h"

/*
cd /mnt/c/tmk_keyboard/keyboard/epson
make clean
make
*/

const action_t PROGMEM fn_actions[] = {
	[1] = ACTION_LAYER_TAP_KEY(1, KC_LEFT), //The FN1 key acts as the LEFT arrow key when tapped but accesses layer 1 when held
	[2] = ACTION_LAYER_TOGGLE(2), //Pertains to FN2 - Set up so it acts similar to num lock except with T-nav instead of cross-nav
	[3] = ACTION_LAYER_MOMENTARY(3) 

	
};

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	/* layer 0 (base layer) */	
KEYMAP(
	F1,  F2, 	ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS,  EQL, BSLS,	BSPC,	 FN2, PSLS, PAST, EQL, \
	F3,  F4,	TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LBRC, RBRC,		  NO,	HOME,   UP, PGUP, PMNS,\
	F5,  F6,	LCTL,   A,   S,   D,   F,   G,   H,   J,    K,    L, SCLN, QUOT,		 	 ENT,	LEFT, DOWN, RGHT, PPLS,\
	F7,  F8,	LSFT,   Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH,				RSFT,	END,  DOWN, PGDN,	   \
	F9, F10,	LALT,   NO,				SPC,					    NO,   NO,   NO, LGUI,   	INS,         DEL, PENT),
	
	/* layer 1 (function layer) */
KEYMAP(
	F11,   F12,  GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, PGUP, TRNS, 	NLCK, SLCK, PAUS, TRNS, \
	TRNS, TRNS,  CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  PSCR, SLCK, PAUS,   UP, PGDN,	   NO, 	TRNS, TRNS, TRNS, PSCR, \
	TRNS, TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, LEFT, RGHT,		 TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,    LSFT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  END, DOWN,			 RSFT, 	TRNS, TRNS, TRNS,       \
	TRNS, TRNS, LGUI, TRNS,                   TRNS,                               TRNS, TRNS, TRNS,  FN1, 	TRNS,       TRNS, TRNS  ),
	
	/* layer 2 (numlock layer) */
KEYMAP(
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,      TRNS, 	P7,	   P8,   P9, TRNS, \
	TRNS, TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, 	P4,	   P5,   P6, TRNS, \
	TRNS, TRNS,     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,               TRNS, 	P1,     P2,   P3,       \
	TRNS, TRNS, TRNS, TRNS,                   TRNS,                               TRNS, TRNS, TRNS, TRNS, 	P0,		  PDOT, TRNS  ),
	
	/* layer 3 (presently unused, use this as base layer for traditional num-lock behavior and edit led.c file accordingly) */ 
KEYMAP(
	F1,  F2, 	ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS,  EQL, BSLS,	BSPC,	NLCK, PSLS, PAST, EQL, \
	F3,  F4,	TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LBRC, RBRC,		  NO,	P7,	P8,   P9,	  PMNS,\
	F5,  F6,	LCTL,   A,   S,   D,   F,   G,   H,   J,    K,    L, SCLN, QUOT,		 	 ENT,	P4,  P5,   P6,	  PPLS,\
	F7,  F8,	LSFT,   Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH,				RSFT,	P1,  P2,   P3,		  \
	F9, F10,	LALT,   NO,				SPC,					    NO,   NO,   NO, LGUI,   	P0,		 PDOT, PENT),
};


