#include "keymap_common.h"

/*
cd /mnt/c/tmk_keyboard/keyboard/alps64_ad
make clean
make
*/

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {

    [0] = KEYMAP( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,    0, MINS,  EQL, BSLS,  DEL, \
        TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,    P, LBRC, RBRC,     BSPC, \
        LCTL,      A,   S,   D,   F,   G,   H,   J,   K,   L, SCLN, QUOT,        ENT,  \
        LSFT,        Z,   X,   C,   V,   B,   N,   M, COMM, DOT, SLSH,      RSFT, NO, \
        NO, LCTL,LGUI,LALT,              SPC,                   RALT, FN1, RCTL,  NO),
	   
    [1] = KEYMAP( \
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS, INS, \
        CAPS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP, PGDN,  PGUP, \
        TRNS,  VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,LEFT,RGHT,       TRNS, \
        LSFT,    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, END,DOWN,     RSFT,TRNS, \
        TRNS,TRNS,TRNS, TRNS,      TRNS,                     TRNS,TRNS, FN2,TRNS),

    [2] = KEYMAP( \
        TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   7,   8,   9,TRNS,MINS, EQL,TRNS,TRNS, \
        TRNS,  TRNS,  UP,TRNS,TRNS,TRNS,TRNS,   4,   5,   6,  NO,TRNS,TRNS,    TRNS, \
        TRNS,   LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,   1,   2,   3,SCLN,QUOT,        TRNS, \
        TRNS,    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   0,TRNS, DOT,SLSH,       TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,           TRNS,                   TRNS,TRNS, FN2,TRNS),
};

const action_t fn_actions[] PROGMEM = {
    [1]  = ACTION_LAYER_MOMENTARY(1),
    [2]  = ACTION_LAYER_TOGGLE(2),
};