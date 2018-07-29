#include "keymap_common.h"
/*
cd /mnt/c/tmk_keyboard/keyboard/xd75
make clean
make
*/

const action_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(0),
    [1]  = ACTION_LAYER_MOMENTARY(1),
    [2]  = ACTION_LAYER_TOGGLE(2),
};

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* layer 0 */
    KEYMAP(
        ESC,	 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,QUOT, DEL, \
        TAB,    Q,   W,   E,   R,   T,  P7,  P8,  P9,   Y,   U,   I,   O,   P,BSPC, \
        LCTL,   A,   S,   D,   F,   G,  P4,  P5,  P6,   H,   J,   K,   L,SCLN, ENT, \
        LSFT,   Z,   X,   C,   V,   B,  P1,  P2,  P3,   N,   M,COMM, DOT,SLSH,RSFT, \
        FN1, LGUI,LALT, DEL,BSPC, SPC,QUOT,  P0,PDOT, SPC, FN1,LEFT,DOWN,  UP,RGHT),
    /* layer 1 */
    KEYMAP(
         GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  UP,SLCK,PSCR,TRNS, \
        TRNS,TRNS,TRNS,TRNS,PAUS,TRNS,TRNS,TRNS,TRNS,HOME,LEFT,RGHT,PGUP,TRNS,TRNS, \
        TRNS,TRNS,TRNS,CALC,TRNS,TRNS,TRNS,TRNS,TRNS, END,DOWN,PGDN,TRNS,TRNS,TRNS, \
        FN2 ,TRNS,TRNS,TRNS,LBRC,TRNS,TRNS,TRNS,TRNS,TRNS,RBRC,TRNS,TRNS,TRNS,APP),
    /* layer 2 */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  NO,PSLS,PAST, EQL,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PMNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC,TRNS,TRNS, ENT,TRNS,TRNS,TRNS,TRNS,TRNS, \
        FN2 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    /* layer 3 */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
};

/*
enum macro_id {
    MACRO_0,
    MACRO_1,
    MACRO_2,
    MACRO_3,
    MACRO_4,
    MACRO_5,
    MACRO_6,
    MACRO_7,
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    keyevent_t event = record->event;
    switch (id) {
        case MACRO_0:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_1:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_2:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_3:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_4:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_5:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_6:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_7:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
    }
    return MACRO_NONE;
}
*/