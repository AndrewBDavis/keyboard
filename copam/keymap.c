#include "keymap_common.h"

/*
cd /mnt/c/tmk_keyboard/keyboard/copam
make clean
make
*/

const action_t PROGMEM fn_actions[] = {
	[1] = ACTION_LAYER_TAP_KEY(1, KC_LEFT),
};

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	/* layer 0 */	
KEYMAP(
	F1,  F2, 	ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS,  EQL, BSPC,	BSLS,	DEL,	PSLS, PAST, EQL, \
	F3,	F4,	TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LBRC, RBRC,		TRNS,	P7,  P8,   P9,	  PMNS,\
	F5,	F6,	 LCTL,   A,   S,   D,   F,   G,   H,   J,    K,    L, SCLN, QUOT,		 ENT,	P4,  P5,   P6,	  PPLS,\
	F7,	F8,	  LSFT,   Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH,			RSFT,	P1,  P2,   P3,		  \
	F9,	F10,	LALT, LGUI,				SPC,					  FN1, DOWN,   UP, 	RGHT,   	P0,		 PDOT, PENT),
	/* layer 1 */
KEYMAP(
	 F11,  F12,  GRV, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PGUP, TRNS, 	NLCK, TRNS, PAUS, TRNS, \
	TRNS, TRNS,  CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  INS, SLCK, PSCR,   UP, PGDN,	 TRNS, 	TRNS, TRNS, TRNS, PSCR, \
	TRNS, TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, LEFT, RGHT,		 TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,    LSFT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  END, DOWN,			 RSFT, 	TRNS, TRNS, TRNS,       \
	TRNS, TRNS, TRNS, TRNS,                   TRNS,                               TRNS, TRNS, TRNS, TRNS, 	TRNS,       TRNS, TRNS  ),
	/* layer 2 */
KEYMAP(
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,      TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,               TRNS, 	TRNS, TRNS, TRNS,       \
	TRNS, TRNS, TRNS, TRNS,                   TRNS,                               TRNS, TRNS, TRNS, TRNS, 	TRNS,       TRNS, TRNS  ),
	/* layer 3 */
KEYMAP(
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,      TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,               TRNS, 	TRNS, TRNS, TRNS,       \
	TRNS, TRNS, TRNS, TRNS,                   TRNS,                               TRNS, TRNS, TRNS, TRNS, 	TRNS,       TRNS, TRNS  ),
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
