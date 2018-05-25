#include "keymap_common.h"
/*
cd /mnt/c/tmk_keyboard/keyboard/infinity_chibios
make -f Makefile clean
make -f Makefile
*/

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `|BSp|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * |-----------------------------------------------------------'
     * |     |Gui|Alt  |         Space         |Alt  |Gui|   |     |
     * `-----------------------------------------------------------'
     */
[0] = KEYMAP(
	ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,	MINS, EQL,BSLS, 	DEL,	\
	TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,		LBRC,RBRC,	BSPC,	\
	LCTL,  	A,   S,   D,   F,   G,   H,   J,   K,   L,		SCLN,QUOT, 	ENT,	\
	LSFT,  	Z,   X,   C,   V,   B,   N,   M,   COMM, DOT, 	SLSH,		RSFT,TRNS,	\
	FN2,  NO,LGUI,				SPC,				NO, FN1,  NO, 	NO),

[1] = KEYMAP(
	GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, 	 DEL,		\
	CAPS,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PAUS,SLCK,PSCR,  UP,PGDN, 	PGUP,	\
	TRNS,	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,	LEFT,RGHT,	TRNS,		\
	TRNS,	  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, END,	DOWN,		LALT,TRNS,	\
	TRNS,TRNS,TRNS,			TRNS,					TRNS,TRNS,TRNS,TRNS),
[2] = KEYMAP(
	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  NO,PSLS,PAST,TRNS,TRNS,TRNS,	TRNS,		\
	TRNS,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P7,  P8,  P9,PMNS,PGDN, 	PGDN,	\
	TRNS,	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P4,  P5,	  P6,PPLS,	TRNS,		\
	TRNS,	  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P1,  P2,	  P3,		TRNS,TRNS,	\
	TRNS,TRNS, FN3,          	  P0,		               TRNS,PDOT,TRNS,TRNS),
	
[3] = KEYMAP(
	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,	TRNS,		\
	TRNS,  TRNS,  UP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LBRC,RBRC, 	TRNS,	\
	TRNS,	LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,	TRNS,TRNS,	TRNS,		\
	TRNS,	  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,	TRNS,		TRNS,TRNS,	\
	TRNS,TRNS,TRNS,          	 SPC,		               TRNS,TRNS,TRNS,TRNS),
};

const uint16_t fn_actions[] = {
	[1] = ACTION_LAYER_MOMENTARY(1),
	[2] = ACTION_LAYER_MOMENTARY(2),
	[3] = ACTION_LAYER_MOMENTARY(3),	
};

