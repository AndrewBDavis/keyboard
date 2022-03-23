#include "keymap_common.h"

/*
cd /mnt/c/tmk_keyboard/keyboard/ad16
make clean
make
*/

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* 0: qwerty */
    SINGLES_KEYMAP(KP_7,  KP_8, KP_9, PSLS, \
                   KP_4,  KP_5, KP_6, PMNS, \
                   KP_1,  KP_2, KP_3, PAST, \
                   KP_0,  PDOT, FN0,  PSLS ),

    /* FN 1 */
    SINGLES_KEYMAP(NLCK,   UP, TRNS, TRNS, \
                   LEFT, DOWN, TRNS, TRNS, \
                   TRNS, DOWN, TRNS, TRNS, \
                    FN1,  FN2, TRNS,  FN3 ),

};

const action_t fn_actions[] PROGMEM = {
	[0] = ACTION_LAYER_TOGGLE(1),
	[1] = ACTION_BACKLIGHT_LEVEL(1),
};