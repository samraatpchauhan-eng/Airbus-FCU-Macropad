// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
        LCTL(LSFT(KC_M)), KC_MPLY, KC_MPRV, KC_COPY, KC_MNXT, KC_PASTE, KC_KB_MUTE, LCTL(KC_0), KC_SYSTEM_SLEEP, KC_MPLY
    )
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0: // EC_5 - Volume Control
            if (clockwise) {
                tap_code(KC_VOLU); 
            } else {
                tap_code(KC_VOLD); 
            }
            break;

        case 1: // EC_7 - Zoom Control
            if (clockwise) {
                tap_code16(LCTL(KC_EQUAL)); // Zoom In (Ctrl + +)
            } else {
                tap_code16(LCTL(KC_MINUS)); // Zoom Out (Ctrl + -)
            }
            break;

        case 2: // EC_6 - Media Track Navigation
            if (clockwise) {
                tap_code(KC_MNXT); // Next Track
            } else {
                tap_code(KC_MPRV); // Previous Track
            }
            break;

        case 3: // EC_8 - Horizontal Scrolling
            if (clockwise) {
                tap_code(MS_WHLR); // Scroll Right 
            } else {
                tap_code(MS_WHLL); // Scroll Left 
            }
            break;
    }
    return true;
}
#endif
