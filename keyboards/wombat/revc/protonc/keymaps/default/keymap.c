/* Copyright 2019 Eli Gladman
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QW,
    _FN1,
    _FN2,
    _LOCK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QW] = LAYOUT_standard(
			    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, LT(_FN2, KC_RBRC), \
      KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,          KC_ENT,  \
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          MO(_FN1),\
      LCTL_T(KC_ESC),MO(_FN2), KC_LALT,   KC_BSPC,          LT(_FN1, KC_SPC),          KC_RALT, _______, RSFT_T(KC_GRV), TT(_LOCK) \
    ),

    [_FN1] = LAYOUT_standard(
      KC_CAPS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_MPRV, KC_MPLY, KC_MNXT, KC_UP,   KC_BSLS, XXXXXXX,\
      _______, KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,          _______, \
      _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_INS,  KC_END,  KC_PGDN, KC_DOWN, KC_QUOT,          _______, \
      _______, XXXXXXX, _______,          KC_SPC,           _______,                   KC_DEL,  BL_TOGG, BL_STEP, _______  \
    ),

    [_FN2] = LAYOUT_standard(
      _______, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), _______, KC_WH_L, KC_WH_R, KC_MS_U, _______, _______, \
      _______, LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), LSFT(KC_MINS), LSFT(KC_EQL), _______, KC_WH_U, KC_MS_L, KC_MS_R,          _______, \
      _______, KC_BTN1, KC_BTN2, _______, _______, _______, _______, _______, KC_WH_D, KC_MS_D, LSFT(KC_QUOT),          _______, \
      _______, _______, _______,          _______,          _______,                   KC_DEL,  _______, _______, _______  \
    ),

    [_LOCK] = LAYOUT_standard(
      KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_DEL,  KC_BSPC, \
      KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H, KC_F5,   KC_F6,   KC_F7,   KC_F8,            KC_ENT,  \
      KC_LSFT, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6, KC_F9,   KC_F10,  KC_F11,  KC_F12,           XXXXXXX, \
      KC_LCTL, XXXXXXX, KC_LALT,          KC_SPC,           KC_LGUI,                XXXXXXX, XXXXXXX, XXXXXXX, _______  \
    ),
};


/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
