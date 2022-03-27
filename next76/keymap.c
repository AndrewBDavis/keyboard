#include "keymap_common.h"

/*
cd /mnt/c/tmk_keyboard/keyboard/next76
make clean
make
*/

const action_t PROGMEM fn_actions[] = {
	[1] = ACTION_LAYER_MOMENTARY(1),
	[2] = ACTION_LAYER_TOGGLE(2),
};

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	/* layer 0 (Base Layer) */	
KEYMAP(
	EQL,  PAST, PSLS,  FN2, 	ESC, 1,    2,    3,    4,    5,    6,    7,    8,   9,    0, MINS,  EQL,   BSLS, \
	PMNS,   NO,   UP,   NO,	TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,   O,    P, LBRC, RBRC,  BSPC, \
	PPLS, LEFT, DOWN, RGHT,	LCTL,  A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT,	      ENT, \
	PENT,   NO, DOWN,   NO,	LSFT,   Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,		     RSFT, \
	PENT,   NO,   NO, PDOT,	LGUI, LALT,			      SPC,			           FN1, 		LCTL  ),
	
	/* layer 1 (function layer) */
KEYMAP(
	TRNS, TRNS, TRNS, NLCK,  GRV,    F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12,   TRNS, \
	TRNS, TRNS, TRNS, TRNS,  CAPS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS,   UP, PGDN,  PGUP, \
	TRNS, TRNS, TRNS, TRNS,  TRNS,   VOLD, VOLU, MUTE, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, LEFT, RGHT,	     TRNS, \
	TRNS, TRNS, TRNS, TRNS,  LSFT,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  END, DOWN,		     RSFT, \
	TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS,                       TRNS,					   TRNS, 		     TRNS  ),
	
	/* layer 2 (empty layer) */
KEYMAP(
	TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, \
	TRNS,   P7,   P8,   P9,  TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
	TRNS,   P4,   P5,   P6,  TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,	    TRNS, \
	TRNS,   P1,   P2,   P3,  TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,		    TRNS, \
	TRNS,   P0,   P0, TRNS,  TRNS, TRNS,                  TRNS,						   TRNS, 		    TRNS ),
};

