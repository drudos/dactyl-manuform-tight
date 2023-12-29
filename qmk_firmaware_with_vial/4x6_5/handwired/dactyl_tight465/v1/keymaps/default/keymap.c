// Copyright 2023 Drudlik
// SPDX-License-Identifier: GPL-2.0-or-later

/*
make handwired/dactyl_tight465/v1:default

qmk flash -kb handwired/dactyl_tight465/v1 -km default -bl avrdude-split-left
qmk flash -kb handwired/dactyl_tight465/v1 -km default -bl avrdude-split-right
*/

#include QMK_KEYBOARD_H

enum layer {
    LR_0,
    LR_1,
    LR_2,
};

#define LFN_1 RALT_T(KC_ENT)
#define LFN_2 LT(LR_1,KC_LBRC)
#define LFN_3 LCTL_T(KC_EQL)

#define RFN_1 RALT_T(KC_SPC)
#define RFN_2 LT(LR_1,KC_RBRC)
#define RFN_3 RCTL_T(KC_MINS)

#define FU_1 MO(LR_2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LR_0] = LAYOUT(
                 KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_MINS, KC_EQL,
                 QK_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
                 KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
                 SC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC,
                                   KC_LALT, FU_1,    LFN_3,   LFN_2,   LFN_1,       KC_SPC,  RFN_2,   RFN_3,   FU_1,    KC_LGUI
    ),
    [LR_1] = LAYOUT(
                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 _______, KC_0,    KC_7,    KC_8,    KC_9,    KC_BSPC,                       KC_DEL,  KC_HOME, KC_UP,   KC_END,  KC_PGUP, XXXXXXX,
                 _______, KC_0,    KC_4,    KC_5,    KC_6,    KC_DEL,                        KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, XXXXXXX,
                 _______, KC_0,    KC_1,    KC_2,    KC_3,    KC_PDOT,                       KC_COMM, XXXXXXX, KC_APP, XXXXXXX, XXXXXXX, _______,
                                   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
    ),
    [LR_2] = LAYOUT(
                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX,      XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,       XXXXXXX,
                 _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   XXXXXXX,                       KC_MS_ACCEL0, XXXXXXX,    KC_MS_UP,   XXXXXXX,     KC_MS_WH_UP,   XXXXXXX,
                 _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_DEL,                        KC_MS_ACCEL1, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_WH_DOWN, XXXXXXX,
                 _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX,                       KC_MS_ACCEL2, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2,  XXXXXXX,       _______,
                                   _______, _______, _______, _______, _______,     _______, _______,      _______,    _______, _______
    ),
};
