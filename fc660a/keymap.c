#include "keymap_common.h"

/*
cd /mnt/c/tmk_keyboard/keyboard/fc660a
make clean
make
*/

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* 0: qwerty
     * ,-----------------------------------------------------------.
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  #|Bsp|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shft|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Esc|
     * |-----------------------------------------------------------'
     * |Ctrl|Gui |Alt |         Space         |App |Alt |Gui |Ctrl |
     * `-----------------------------------------------------------'
     */
    [0] = KEYMAP( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS,  EQL, BSLS, NO,      INS, \
        TAB, 	Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LBRC, RBRC, BSPC, 	   DEL, \
        LCTL,	  A,   S,   D,   F,   G,   H,   J,   K,   L, SCLN, QUOT,    ENT,		  	   \
        LSFT, NO,	Z,   X,   C,   V,   B,   N,   M,  COMM,  DOT, SLSH,  RSFT,      UP, 	   \
        LCTL, LALT, LGUI,			SPC,		    RALT,  FN1,  FN2,   	 LEFT, DOWN, RGHT),
	   
    [1] = KEYMAP( \
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,	TRNS, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, PGDN,	PGUP,	TRNS, \
        TRNS,	VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,RGHT,    PENT, 		 \
        LSFT, NO, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DOWN,  RSFT,	TRNS, 	 \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,	TRNS,TRNS,TRNS),
};

const action_t fn_actions[] PROGMEM = {
    [1]  = ACTION_LAYER_MOMENTARY(1),
};
