// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = {
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU)
    }
};
const uint16_t PROGMEM encoder_switch_map[][NUM_ENCODERS] = {
    [0] = {KC_MUTE}
};

#ifdef OLED_ENABLE
bool oled_task_user(void){
    oled_write_ln_P(PSTR("SkullPad"), false);
    oled_write_ln_P(PSTR("Ready"), false);
    return false;
}
#endif

#ifdef OLED_ENABLE
static void render_status(void) {
    oled write_ln_P(PSTR("SkullPad"), false);

    switch(get_highest_layer(layer_state)){
        case 0:
            oled_write_ln_P(PSTR("LAYER: BASE"), false);
            break;
        default:
            oled_write_ln_P(PSTR("vol ctrl active"), false);
    }

    bool oled_task_user(void) {
        render_status();
        return false;
    }
}
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x3(
        KC_NO,    LCTL(KC_M),    KC_DEL,
        KC_MPRV,    KC_MPLY,    KC_MNXT
    )
};
