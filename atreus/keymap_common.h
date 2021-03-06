#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

//pcb up
#define KEYMAP( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A \
) {                                                                     \
  { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_NO, KC_##K05, KC_##K06, KC_##K07, KC_##K08, KC_##K09 }, \
  { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_NO, KC_##K15, KC_##K16, KC_##K17, KC_##K18, KC_##K19 }, \
  { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K34,   KC_##K25, KC_##K26, KC_##K27, KC_##K28, KC_##K29 }, \
  { KC_##K2A, KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_##K35,   KC_##K36, KC_##K37, KC_##K38, KC_##K39, KC_##K3A }      \
}
/*

//pcb down
#define KEYMAP( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A \
) {                                                                     \
  { KC_##K09, KC_##K08, KC_##K07, KC_##K06, KC_##K05, KC_##KC_NO, KC_##K04, KC_##K03, KC_##K02, KC_##K01, KC_##K00 }, \
  { KC_##K19, KC_##K18, KC_##K17, KC_##K16, KC_##K15, KC_##KC_NO, KC_##K14, KC_##K13, KC_##K12, KC_##K11, KC_##K10 }, \
  { KC_##K29, KC_##K28, KC_##K27, KC_##K26, KC_##K25, KC_##K35,   KC_##K24, KC_##K23, KC_##K22, KC_##K21, KC_##K20 }, \
  { KC_##K3A, KC_##K39, KC_##K38, KC_##K37, KC_##K36, KC_##K34,   KC_##K33, KC_##K32, KC_##K31, KC_##K30, KC_##K2A } \
}

*/
enum function_id {
  BOOTLOADER,
};

void bootloader(void);

#endif
