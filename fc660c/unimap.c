#include "action.h"
#include "actionmap.h"
#include "hook.h"
#include "fc660c.h"
/*
cd /mnt/c/tmk_keyboard/keyboard/fc660c
make clean
make

*/
#define AC_L0       ACTION_LAYER_MOMENTARY(0)
#define AC_L1       ACTION_LAYER_MOMENTARY(1)
#define AC_L2       ACTION_LAYER_TOGGLE(2)
#define AC_L3       ACTION_LAYER_MOMENTARY(3)

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif

[0] = KMAP(
	ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, 	BSLS,	INS,
	TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,	BSPC,	DEL,
	LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     	ENT,
	LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          	RSFT,	UP,
	LCTL,LGUI,LALT,          SPC,                     LALT, L1,  L3, 		LEFT,DOWN,RGHT
    ),
    
[1] = KMAP(
	GRV,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,	TRNS,	TRNS,
	CAPS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PAUS,SLCK,PSCR,  UP,PGDN,	PGUP,	TRNS,
	TRNS,	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,LEFT,RGHT,	TRNS,
	TRNS,	 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, END,DOWN,		TRNS,	TRNS,
	TRNS,TRNS,TRNS,          TRNS,                     TRNS,TRNS,  L2,		TRNS,TRNS,TRNS
	),
	
[2] = KMAP(
	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  NO,PSLS,PAST,TRNS,TRNS,	TRNS,	TRNS,
	TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P7,  P8,  P9,PMNS,PGDN,	PGUP,	TRNS,
	TRNS,	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P4,  P5,  P6,PPLS,	TRNS,
	TRNS,	 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P1,  P2,  P3,		TRNS,	TRNS,
	TRNS,TRNS,  L3,          TRNS,                       P0,PDOT,  L2,		TRNS,TRNS,TRNS
    ),
    
[3] = KMAP(
	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   9,   0,TRNS,TRNS,	TRNS,	TRNS,
	TRNS, TRNS,  UP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LBRC,RBRC,	TRNS,	TRNS,
	TRNS,  LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,		TRNS,
	LSFT,	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,		TRNS,	TRNS,
	TRNS,TRNS,TRNS,          TRNS,                     TRNS,TRNS,TRNS,		TRNS,TRNS,TRNS
    ),
};

void hook_layer_change(uint32_t layer_state)
{
    // lights LED on Insert when layer 1 is enabled
    if (layer_state & (1L<<2)) {
	PORTB &= ~(1<<6);
    } else {
		PORTB |=  (1<<6);
    }
}
