// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ESC│ c │ p │
     * ├───┼───┼───┤
     * │ ^ │∆||│ ↓ │
     * ├───┼───┼───┤
     * │ < │slt│ > │
     * └───┴───┴───┘
     */
    [0] = LAYOUT(
        /* Row 0: Encoder Press (Col 2)*/
        /*Row 1: 3x3 Grid*/
                               KC_MUTE,
        KC_ESC,    KC_COPY,    KC_PASTE,
        KC_BRIGHTNESS_UP,    KC_MEDIA_PLAY_PAUSE,    KC_BRIGHTNESS_DOWN,
        KC_UNDO,    KC_SELECT,    KC_AGAIN
    )
};

/* Handles the knob turning for rotary encoder */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Hello"), false);
    return false;
}
#endif