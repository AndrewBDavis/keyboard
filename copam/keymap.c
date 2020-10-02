#include "keymap_common.h"

/*
cd /mnt/c/tmk_keyboard/keyboard/copam
make clean
make
*/

const action_t PROGMEM fn_actions[] = {
	[1] = ACTION_LAYER_TAP_KEY(1, KC_LEFT), //The FN1 key acts as the LEFT arrow key when tapped but accesses layer 1 when held
	[2] = ACTION_LAYER_TOGGLE(2), //Pertains to FN2 - Set up so it acts similar to num lock except with T-nav instead of cross-nav
	[3] = ACTION_LAYER_MOMENTARY(3) 

	
};

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	/* layer 0 (Base Layer) */	
KEYMAP(
	F5,  PSCR, 	ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS,  EQL,  GRV,	BSLS,	DEL,	 PSLS, PAST, EQL, \
	SLCK, FN2,	TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LBRC, RBRC,		BSPC,	HOME,   UP, PGUP, PMNS,\
	INS, PGUP,	LCTL,   A,   S,   D,   F,   G,   H,   J,    K,    L, SCLN, QUOT,		 	ENT,	LEFT, DOWN, RGHT, PPLS,\
	HOME,PGDN,	LSFT,   Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH,				RSFT,	END,  DOWN, PGDN,	   \
	END,  DEL,	LGUI, LALT,				SPC,					  FN1, DOWN,   UP, 	RGHT,   	INS,         DEL, PENT),
	
	/* layer 1 (function layer) */
KEYMAP(
	TRNS, TRNS,  GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS, TRNS, 	NLCK, SLCK, PAUS, TRNS, \
	TRNS, TRNS,  CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  INS, SLCK, PSCR,   UP, PGDN,	 PGUP, 	TRNS, TRNS, TRNS, PSCR, \
	TRNS, TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, LEFT, RGHT,		 TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,    LSFT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  END, DOWN,		 RSFT, 	TRNS, TRNS, TRNS,       \
	TRNS, TRNS, TRNS, TRNS,                   TRNS,                               TRNS, TRNS, TRNS, TRNS, 	TRNS,       TRNS, TRNS  ),
	
	/* layer 2 (numlock layer) */
KEYMAP(
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 	TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,      TRNS, 	P7,	P8,   P9, TRNS, \
	TRNS, TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,           TRNS, 	P4,	P5,   P6, TRNS, \
	TRNS, TRNS,     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,               TRNS, 	P1,     P2,   P3,       \
	TRNS, TRNS, TRNS, TRNS,                   TRNS,                               TRNS, TRNS, TRNS, TRNS, 	P0,   PDOT, 	  TRNS  ),
	
	/* layer 3 (unused) */ 
KEYMAP(
	F5,  PSCR, 	ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS,  EQL,  GRV,	BSLS,	DEL, PSLS, PAST,  EQL, \
	SLCK, FN2,	TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LBRC, RBRC,		BSPC,	P7,    P8,   P9, PMNS, \
	INS, PGUP,	LCTL,   A,   S,   D,   F,   G,   H,   J,    K,    L, SCLN, QUOT,		 ENT,	P4,    P5,   P6, PPLS, \
	HOME,PGDN,	LSFT,   Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH,			RSFT,	P1,    P2,   P3,       \
	END,  DEL,	LGUI, LALT,				SPC,			FN1, DOWN,  UP, RGHT,   P0,  PDOT, 	 PENT  ),
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

