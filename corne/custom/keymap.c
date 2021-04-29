/* -*- eval: (outshine-mode 1); -*- */
#include QMK_KEYBOARD_H
#include "mymacros.h"
#include "tapdances.h"

/* * Keymap */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* ** Colemak-DH */
  [0] = LAYOUT_split_3x6_3(KC_TAB,
                           KC_Q,
                           KC_W,
                           KC_F,
                           KC_P,
                           KC_B,
                           KC_J,
                           KC_L,
                           KC_U,
                           KC_Y,
                           LT(6, KC_SCLN),
                           KC_ESC,

                           KC_ENT,
                           KC_A,
                           KC_R,
                           KC_S,
                           KC_T,
                           LGUI_T(KC_G),
                           KC_M,
                           KC_N,
                           KC_E,
                           KC_I,
                           LT(5, KC_O),
                           LGUI_T(KC_QUOT),

                           KC_DEL,
                           KC_Z,
                           KC_X,
                           KC_C,
                           KC_D,
                           LT(5, KC_V),
                           KC_K,
                           KC_H,
                           KC_COMM,
                           KC_DOT,
                           RGUI_T(KC_SLSH),
                           LALT_T(KC_MINS),


                           KC_BSPC,
                           OSL(2),
                           KC_SPC,
                           OSM(MOD_LSFT),
                           OSM(MOD_LCTL),
                           OSL(3)
                           ),

/* ** QWERTY */
  [1] = LAYOUT_split_3x6_3(KC_TAB,
                           KC_Q,
                           KC_W,
                           KC_E,
                           KC_R,
                           KC_T,
                           KC_Y,
                           KC_U,
                           KC_I,
                           KC_O,
                           KC_P,
                           KC_ESC,

                           KC_ENT,
                           KC_A,
                           KC_S,
                           KC_D,
                           KC_F,
                           KC_G,
                           KC_H,
                           KC_J,
                           KC_K,
                           KC_L,
                           KC_SCLN,
                           LGUI_T(KC_QUOT),

                           KC_DEL,
                           KC_Z,
                           KC_X,
                           KC_C,
                           KC_V,
                           KC_B,
                           KC_N,
                           KC_M,
                           KC_COMM,
                           KC_DOT,
                           KC_SLSH,
                           LALT_T(KC_MINS),


                           KC_BSPC,
                           OSL(2),
                           KC_SPC,
                           OSM(MOD_LSFT),
                           OSM(MOD_LCTL),
                           OSL(3)
                           ),

/* ** Numbers and Symbols */
  [2] = LAYOUT_split_3x6_3(KC_TRNS,
                           KC_EXLM,
                           KC_AT,
                           KC_HASH,
                           KC_DLR,
                           KC_PERC,
                           KC_CIRC,
                           KC_AMPR,
                           KC_ASTR,
                           KC_BSLS,
                           TD(EQL_EQLCOL), /* KC_EQL, */
                           KC_TRNS,

                           KC_ENT,
                           KC_1,
                           KC_2,
                           KC_3,
                           KC_4,
                           KC_5,
                           KC_6,
                           KC_7,
                           KC_8,
                           KC_9,
                           KC_0,
                           KC_DOT,

                           LT(4, KC_DEL),
                           KC_UNDS,
                           KC_LCBR,
                           KC_LBRC,
                           TD(LPRN_ARROW), /* KC_LPRN, */
                           KC_PLUS,
                           KC_PIPE,
                           TD(RPRN_ARROW), /* KC_RPRN, */
                           KC_RBRC,
                           KC_RCBR,
                           KC_TILD,
                           KC_GRV,

                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS,
                           MO(MOD_LALT),
                           KC_TRNS
                           ),
/* ** Fn and Misc */
  [3] = LAYOUT_split_3x6_3(KC_PSCR,
                           KC_F1,
                           KC_F2,
                           KC_F3,
                           KC_F10,
                           KC_BTN3,
                           KC_HOME,
                           KC_PGDN,
                           KC_PGUP,
                           KC_END,
                           KC_VOLU,
                           KC_ESC,

                           KC_TRNS,
                           KC_F4,
                           KC_F5,
                           KC_F6,
                           KC_BTN1,
                           KC_BTN2,
                           KC_LEFT,
                           KC_DOWN,
                           KC_UP,
                           KC_RGHT,
                           KC_WH_D,
                           KC_WH_U,

                           TD(MENU_TERM), /* KC_APP, */
                           KC_F7,
                           KC_F8,
                           KC_F9,
                           KC_F11,
                           KC_F12,
                           KC_MS_L,
                           KC_MS_D,
                           KC_MS_U,
                           KC_MS_R,
                           KC_VOLD,
                           MO(4),

                           KC_TRNS,
                           KC_LCTL,
                           /* LSFT_T(send_string(".  ")), */
                           TD(SFT_END_SENT), /* KC_LSFT, */
                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS
                           ),
/* ** RESET */
  [4] = LAYOUT_split_3x6_3(RESET,
                           DF(1),
                           DF(0),
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           RESET,

                           KC_CAPS,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_MRWD,
                           KC_NO,
                           KC_NO,
                           KC_MFFD,
                           KC_NO,
                           KC_NO,

                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_TRNS,

                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS
                           ),

/* ** Vim */
  [5] = LAYOUT_split_3x6_3(VIMSPLIT_H,
                           VIMSPLIT_V,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           VIMDOW_L,
                           VIMDOW_D,
                           VIMDOW_U,
                           VIMDOW_R,
                           VIMEDIT,
                           VIMEXEC,

                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           LGUI(KC_H),
                           LGUI(KC_J),
                           LGUI(KC_K),
                           LGUI(KC_L),
                           KC_NO,
                           TD(VIM_SR_SR_ALL),

                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,

                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS, /* LGUI_T(KC_SPC), */
                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS
                           ),

/* ** WM and Misc */
  [6] = LAYOUT_split_3x6_3(WM_TILE_TL,
                           WM_TILE_T,
                           WM_TILE_TR,
                           WM_MV_WSPC_P,
                           WM_MV_WSPC_N,
                           WM_MAX,
                           TD(GRASP_CAP_NOTE),
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,

                           WM_TILE_L,
                           RGUI_TAB,
                           WM_TILE_R,
                           WM_WSPC_P,
                           WM_WSPC_N,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,

                           WM_TILE_BL,
                           WM_TILE_B,
                           WM_TILE_BR,
                           WM_MAX_H,
                           WM_MAX_V,
                           WM_MIN,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,
                           KC_NO,

                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS,
                           KC_TRNS
                           ),

};
