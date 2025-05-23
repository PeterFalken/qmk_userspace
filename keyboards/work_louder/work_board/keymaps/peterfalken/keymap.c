// Copyright 2023 Peter.Falken (@PeterFalken)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "peterfalken.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   ▽  | Ctrl | Opt  | Cmd  | LWR  |    Space    | RSE  | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, _______,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    _______, KC_LCTL, KC_LOPT, KC_LCMD, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   ▽  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |   ▽  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽      ▽  |   ▽  | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_DEL, _______,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS,    KC_PLUS,    KC_LCBR, KC_RCBR, KC_PIPE,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END,  _______,
    _______, _______, _______, _______, _______, _______, _______, _______,    KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   ▽  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |   ▽  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽      ▽  |   ▽  | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, _______,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * | RSET |   ▽  | M.AP | M.AL | LPAD |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  | SLEP |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CPWD |  UN  |  CU  |  CO  |  PA  |  MV  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽      ▽  |   ▽  |   ▽  |   ▽  |   ▽  |   ▽  |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT(
    QK_BOOT, _______,   CK_M1, KC_MCTL, KC_LPAD, _______, _______, _______, _______, _______, _______,  KC_DEL, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  CK_LSC,
    CK_CW,   _______,   CK_CU,   CK_CO,   CK_PA,   CK_MV, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)

};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY]   = { { KC_VOLU, KC_VOLD } },
    [_RAISE]    = { { _______, _______ } },
    [_LOWER]    = { { _______, _______ } },
    [_ADJUST]   = { { _______, _______ } },
};
#endif  // ENCODER_ENABLE


// Misc. LED functions
void work_louder_work_board_led_1_on(void) {
    gpio_set_pin_output(WORK_LOUDER_LED_PIN_1);
    gpio_write_pin(WORK_LOUDER_LED_PIN_1, true);
}
void work_louder_work_board_led_2_on(void) {
    gpio_set_pin_output(WORK_LOUDER_LED_PIN_2);
    gpio_write_pin(WORK_LOUDER_LED_PIN_2, true);
}
void work_louder_work_board_led_3_on(void) {
    gpio_set_pin_output(WORK_LOUDER_LED_PIN_3);
    gpio_write_pin(WORK_LOUDER_LED_PIN_3, true);
}

void work_louder_work_board_led_1_off(void) {
    gpio_set_pin_input(WORK_LOUDER_LED_PIN_1);
    gpio_write_pin(WORK_LOUDER_LED_PIN_1, false);
}
void work_louder_work_board_led_2_off(void) {
    gpio_set_pin_input(WORK_LOUDER_LED_PIN_2);
    gpio_write_pin(WORK_LOUDER_LED_PIN_2, false);
}
void work_louder_work_board_led_3_off(void) {
    gpio_set_pin_input(WORK_LOUDER_LED_PIN_3);
    gpio_write_pin(WORK_LOUDER_LED_PIN_3, false);
}

// Custom layer_state indicator
layer_state_t layer_state_set_user(layer_state_t state) {
    // Get layer as number from tri_layer_state(
    int layer = update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
    // Toggle leds based on binary layer number [1  2  3]
    layer & 0x04 ? work_louder_work_board_led_3_on(): work_louder_work_board_led_3_off();
    layer & 0x02 ? work_louder_work_board_led_2_on(): work_louder_work_board_led_2_off();
    layer & 0x01 ? work_louder_work_board_led_1_on(): work_louder_work_board_led_1_off();
    return layer;
}
