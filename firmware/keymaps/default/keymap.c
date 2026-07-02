// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
        LCTL(LSFT(KC_M)), KC_MPLY, KC_MPRV, KC_COPY, KC_MNXT, KC_PASTE, KC_KB_MUTE, LCTL(KC_0), KC_SYSTEM_SLEEP, KC_MPLY
    )
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint16_t index, bool clockwise) {
    switch (index) {
        case 0: //EC_5 - Volume
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
            break;

        case 1: //EC_7 - Zoom
            if (clockwise) {
                tap_code16(LCTL(KC_EQUAL));
            } else {
                tap_code16(LCTL(KC_MINUS));
            }
            break;
        
        case 2: //EC_6 - Brightness
            if (clockwise) {
                tap_code16(KC_BRIGHTNESS_UP);
            } else {
                tap_code16(KC_BRIGHTNESS_DOWN);
            }
            break;
        
        case 3: //EC_8 - Horizontal Navigation
            if (clockwise) {
                tap_code(KC_WH_R);
            } else {
                tap_code(KC_WH_L);
            }
            break;
    }
    return true;
}
#endif
