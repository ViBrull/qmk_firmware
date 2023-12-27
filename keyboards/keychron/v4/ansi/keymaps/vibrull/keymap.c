/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

enum layers {
    BASE,
    WORKGIRL,
    CALC,
    LOREM,
    PIRO,
    SUPERPIRO,
    FN,
    SUPERFN,
    ACCESS
};

enum custom_keycodes {
    FN_SWITCH = SAFE_RANGE,
    PIRO_SWITCH,
    SHIFT_TAP,
    WINALT_COMBO,
    DELETE_NEXT_WORD,
    DELETE_CURRENT_WORD,
    LOREM_IPSUM,
    LOREM_IPSUM_CHARACTER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT_ansi_61(
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_LALT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        SHIFT_TAP, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,     SHIFT_TAP,
        KC_LCTL, PIRO_SWITCH,  FN_SWITCH,                            KC_SPC,                             KC_LWIN,  FN_SWITCH, PIRO_SWITCH, KC_RCTL),
    [WORKGIRL] = LAYOUT_ansi_61(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_MINS,  KC_EQL,   KC_BSPC,
        _______, KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,    KC_J,    KC_F,    KC_U,    KC_P,     KC_SCLN, KC_LBRC,  KC_RBRC,  KC_BSLS,
        _______, KC_A,    KC_S,    KC_H,    KC_T,    KC_G,    KC_X,    KC_N,    KC_E,    KC_O,     KC_I,    KC_QUOT,            KC_ENT,
        _______, KC_Z,    KC_Y,    KC_M,    KC_C,    KC_V,    KC_K,    KC_L,    KC_COMM, KC_DOT,   KC_SLSH,     SHIFT_TAP,
        _______, PIRO_SWITCH,  FN_SWITCH,                            _______,                             _______,  FN_SWITCH, PIRO_SWITCH, _______),
    [CALC] = LAYOUT_ansi_61(
        KC_ESC,  KC_P7,   KC_P8, KC_P9,   KC_PAST,  KC_BSPC, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX, KC_BSPC,   
        KC_PMNS, KC_P4,   KC_P5, KC_P6,   KC_PSLS,  XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX,  
        KC_PENT, KC_P1,   KC_P2, KC_P3,   XXXXXXX,  XXXXXXX, XXXXXXX,     KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,   XXXXXXX,          KC_ENT,
        KC_PPLS, KC_PDOT, KC_P0, XXXXXXX, XXXXXXX,  XXXXXXX, KC_NUM_LOCK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,
        _______, PIRO_SWITCH,  FN_SWITCH,                            _______,           _______,     FN_SWITCH, PIRO_SWITCH,       _______),
    [LOREM] = LAYOUT_ansi_61(
        _______, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, _______,
        _______, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, _______,
        _______, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER,          _______,
        _______, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER, LOREM_IPSUM_CHARACTER,                   _______,
        _______, PIRO_SWITCH, FN_SWITCH,                    LOREM_IPSUM_CHARACTER,                           _______, FN_SWITCH,          PIRO_SWITCH, _______),
    [PIRO] = LAYOUT_ansi_61(
        _______,   RAG(KC_1), RAG(KC_2),    RAG(KC_3),    RAG(KC_4),    RAG(KC_5),    RAG(KC_6),    RAG(KC_7),    RAG(KC_8),    RAG(KC_9),    RAG(KC_0),     RAG(KC_MINS),  RAG(KC_EQL),   _______,
        G(KC_TAB), RAG(KC_Q), RAG(KC_W),    RAG(KC_E),    RAG(KC_R),    RAG(KC_T),    RAG(KC_Y),    RAG(KC_U),    RAG(KC_I),    RAG(KC_O),    RAG(KC_P),     RAG(KC_LBRC),  RAG(KC_RBRC),  RAG(KC_BSLS),
        _______,   RAG(KC_A), RAG(KC_S),    RAG(KC_D),    RAG(KC_F),    RAG(KC_G),    RAG(KC_H),    RAG(KC_J),    RAG(KC_K),    RAG(KC_L),    RAG(KC_SCLN),  RAG(KC_QUOT),                 _______,
        _______,   RAG(KC_Z), RAG(KC_X),    RAG(KC_C),    RAG(KC_V),    RAG(KC_B),    RAG(KC_N),    RAG(KC_M),    RAG(KC_COMM), RAG(KC_DOT),  RAG(KC_SLSH),                                _______,
        _______,   _______,  _______,                            MO(SUPERPIRO),                                   _______,      _______,                     _______,                      _______),
    [SUPERPIRO] = LAYOUT_ansi_61(
        LCAG(KC_F22), RAG(KC_F1),   RAG(KC_F2),   RAG(KC_F3),   RAG(KC_F4),   RAG(KC_F5),   RAG(KC_F6),   RAG(KC_F7),   RAG(KC_F8),   RAG(KC_F9),   RAG(KC_F10),  RAG(KC_F11), RAG(KC_F12), _______,
        _______,      RAG(KC_F13),  RAG(KC_F14),  RAG(KC_F15),  RAG(KC_F16),  RAG(KC_F17),  RAG(KC_F18),  RAG(KC_F19),  RAG(KC_F20),  RAG(KC_F21),  RAG(KC_F22),  RAG(KC_F23), RAG(KC_F24), _______,
        _______,      LCAG(KC_F1),  LCAG(KC_F2),  LCAG(KC_F3),  LCAG(KC_F4),  LCAG(KC_F5),  LCAG(KC_F6),  LCAG(KC_F7),  LCAG(KC_F8),  LCAG(KC_F9),  LCAG(KC_F10), LCAG(KC_F11),             _______,
        _______,      LCAG(KC_F12), LCAG(KC_F13), LCAG(KC_F14), LCAG(KC_F15), LCAG(KC_F16), LCAG(KC_F17), LCAG(KC_F18), LCAG(KC_F19), LCAG(KC_F20), LCAG(KC_F21), _______,
        _______, _______,  _______,                            _______,                             _______,  _______, _______, _______),
    [FN] = LAYOUT_ansi_61(
        KC_GRV,    KC_F1,      KC_F2,     KC_F3,   KC_F4,   KC_F5,   KC_F6,               KC_F7,      KC_F8,      KC_F9,      KC_F10,      KC_F11,           KC_F12,    KC_DELETE,
        G(KC_TAB), C(KC_PGUP), KC_MPRV,   KC_MPLY, KC_MNXT, _______, S(KC_DELETE),        KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,      C(KC_HOME),       C(KC_END), _______,
        _______,   C(KC_PGDN), KC_MUTE,   KC_VOLD, KC_VOLU, _______, DELETE_CURRENT_WORD, KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,    DELETE_NEXT_WORD,            _______,
        _______,   _______,    RSG(KC_S), KC_BRID, KC_BRIU, _______, DELETE_CURRENT_WORD, C(KC_LEFT), C(KC_DOWN), C(KC_UP),   C(KC_RIGHT),                              _______,
        _______,   _______,    _______,                     MO(SUPERFN),                                          _______,    _______,                       _______,   _______),
    [SUPERFN] = LAYOUT_ansi_61(   
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______,
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, LOREM_IPSUM, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,                   _______,
        _______, _______, _______,                    _______,                           _______,     _______,          _______, _______),
    [ACCESS] = LAYOUT_ansi_61(
        XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, TO(WORKGIRL), XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(LOREM), XXXXXXX, XXXXXXX,          XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,      TO(CALC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,                   XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,                                TO(BASE),                    XXXXXXX,   XXXXXXX,          XXXXXXX, XXXXXXX)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint16_t fn_switch_timer;
    static uint8_t fn_switch_tracker = 0;
    static uint8_t fn_switch_pressed = 0;
    static uint16_t piro_switch_timer;
    static uint8_t piro_switch_tracker = 0;
    static uint8_t piro_switch_pressed = 0;
    static uint16_t shift_tap_timer;
    static uint8_t shift_tap_tracker = 0;
    static uint8_t winalt_whatsit = 0;
    static uint16_t lorem_ipsum_timer = 0;
    static uint16_t lorem_ipsum_count = 0;
    static char lorem_ipsum_string[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\n";
    static uint16_t lorem_ipsum_length = sizeof(lorem_ipsum_string)/sizeof(lorem_ipsum_string[0]);
    static char lorem_ipsum_current[] = {'L', '\0'};
    switch (keycode) {
        case FN_SWITCH:
            if (record->event.pressed) {
                fn_switch_timer = timer_read();
                if (layer_state_is(FN)) {
                    layer_off(FN); // If FN is already on, we want the keypress to turn it off right away.
                } else {
                    // We need to find out if we are going to FN or ACCESS.
                    if (piro_switch_pressed == 1){
                        layer_move(ACCESS); // If PIRO_SWITCH is currently pressed, we go to ACCESS, turning off all other layers.
                    } else {
                        layer_on(FN); // Otherwise, we're going to FN.
                        layer_off(PIRO); // And here, we just make sure that PIRO gets turned off.
                    }
                    fn_switch_pressed = 1; // Let everyone know that FN_SWITCH is currently being pressed...
                    fn_switch_tracker = 1; // ...and track to see if another key gets pressed before FN_SWITCH is released, so as not to hold on FN unintentionally.
                }
            } else { // On release:
                if (timer_elapsed(fn_switch_timer) >= TAPPING_TERM || fn_switch_tracker == 0) { // If we held FN_SWITCH for long enough or if another key was pressed,
                    layer_off(FN); // we can turn off the FN layer. Even if it's already off because we actually just turned on ACCESS, this doesn't do any harm.
                }
                fn_switch_pressed = 0; // Let everyone know that FN_SWITCH is no longer being pressed.
            }
            return false; // We handled this keypress

        case PIRO_SWITCH: // This is basically just the inverse of FN_SWITCH, above.
            if (record->event.pressed) {
                piro_switch_timer = timer_read();
                if (layer_state_is(PIRO)) {
                    layer_off(PIRO); // If PIRO is already on, we want the keypress to turn it off right away.
                } else {
                    // We need to find out if we are going to PIRO or ACCESS.
                    if(fn_switch_pressed == 1){
                        layer_move(ACCESS); // If FN_SWITCH is currently pressed, we go to ACCESS, turning off all other layers.
                    } else {
                        layer_on(PIRO); // Otherwise, we're going to PIRO.
                        layer_off(FN); // And here, we just make sure that FN gets turned off.
                    }
                    piro_switch_pressed = 1; // Let everyone know that PIRO_SWITCH is currently being pressed...
                    piro_switch_tracker = 1; // ...and track to see if another key gets pressed before PIRO_SWITCH is released, so as not to hold on PIRO unintentionally.
                }
            } else { // On release:
                if (timer_elapsed(piro_switch_timer) >= TAPPING_TERM || piro_switch_tracker == 0) { // If we held PIRO_SWITCH for long enough or if another key was pressed,
                    layer_off(PIRO); // we can turn off the PIRO layer. Even if it's already off because we actually just turned on ACCESS, this doesn't do any harm.
                }
                piro_switch_pressed = 0; // Let everyone know that PIRO_SWITCH is no longer being pressed.
            }
            return false; // We handled this keypress

        case SHIFT_TAP:
            if (record->event.pressed) {
                shift_tap_timer = timer_read();
                shift_tap_tracker = 1;
                register_code(KC_LSFT);
            } else {
                if (timer_elapsed(shift_tap_timer) >= TAPPING_TERM || shift_tap_tracker == 0) {
                    unregister_code(KC_LSFT);
                } else {
                    shift_tap_tracker = 2;
                }
            }
            return false; // We handled this keypress

        case WINALT_COMBO:
            if (record->event.pressed) {
                if (layer_state_is(FN)) {
                    register_code(KC_LALT);
                    winalt_whatsit = 1;
                }
                if (layer_state_is(PIRO)) {
                    register_code(KC_LALT);
                    register_code(KC_LWIN);
                    winalt_whatsit = 2;
                }
                if (!(layer_state_is(FN) || layer_state_is(PIRO))) {
                    register_code(KC_LWIN);
                    winalt_whatsit = 0;
                }
            } else {
                if (winalt_whatsit != 1) {
                    unregister_code(KC_LWIN);
                }
                if (winalt_whatsit != 0) {
                    unregister_code(KC_LALT);
                }
            }
            return false; // We handled this keypress

        case DELETE_NEXT_WORD:
            if (record->event.pressed) {
                // Make sure we're at the end of the next word:
                register_code(KC_LCTL);
                register_code(KC_LEFT);
                unregister_code(KC_LEFT);
                register_code(KC_RIGHT);
                unregister_code(KC_RIGHT);
                register_code(KC_RIGHT);
                unregister_code(KC_RIGHT);
                unregister_code(KC_LCTL);

                // Select extra trailing spaces:
                register_code(KC_SPC);
                unregister_code(KC_SPC);
                register_code(KC_LCTL);
                register_code(KC_LSFT);
                register_code(KC_RIGHT);
                unregister_code(KC_RIGHT);
                register_code(KC_LEFT);
                unregister_code(KC_LEFT);
                unregister_code(KC_LSFT);
                unregister_code(KC_LCTL);

                // Delete extra trailing space or only trailing space:
                register_code(KC_BSPC);
                unregister_code(KC_BSPC);

                // Delete word (and trailing space, if any remains):
                register_code(KC_LCTL);
                register_code(KC_BSPC);
                unregister_code(KC_BSPC);
                unregister_code(KC_LCTL);
            }
            return false; // We handled this keypress

        case DELETE_CURRENT_WORD:
            if (record->event.pressed) {
                // Make sure we're at the end of the current/previous word:
                register_code(KC_LCTL);
                register_code(KC_LEFT);
                unregister_code(KC_LEFT);
                register_code(KC_RIGHT);
                unregister_code(KC_RIGHT);
                unregister_code(KC_LCTL);

                // Select extra trailing spaces:
                register_code(KC_SPC);
                unregister_code(KC_SPC);
                register_code(KC_LCTL);
                register_code(KC_LSFT);
                register_code(KC_RIGHT);
                unregister_code(KC_RIGHT);
                register_code(KC_LEFT);
                unregister_code(KC_LEFT);
                unregister_code(KC_LSFT);
                unregister_code(KC_LCTL);

                // Delete extra trailing space or only trailing space:
                register_code(KC_BSPC);
                unregister_code(KC_BSPC);

                // Delete word (and trailing space, if any remains):
                register_code(KC_LCTL);
                register_code(KC_BSPC);
                unregister_code(KC_BSPC);
                unregister_code(KC_LCTL);
            }
            return false; // We handled this keypress

        case LOREM_IPSUM:
            if (record->event.pressed) {
                SEND_STRING(lorem_ipsum_string);
            }
            return false; // We handled this keypress

        case LOREM_IPSUM_CHARACTER:
            if (record->event.pressed) {
                if (timer_elapsed(lorem_ipsum_timer) >= 3000) {
                    lorem_ipsum_count = 0;
                }
                lorem_ipsum_current[0] = lorem_ipsum_string[lorem_ipsum_count];
                SEND_STRING(lorem_ipsum_current);
                if (lorem_ipsum_count < lorem_ipsum_length) {
                    lorem_ipsum_count++;
                } else {
                    lorem_ipsum_count = 0;
                }
                lorem_ipsum_timer = timer_read();
            }
            return false; // We handled this keypress

    }

    if (!record->event.pressed && shift_tap_tracker == 2) { // If shift lock was engaged, release shift when the next key is released
        unregister_code(KC_LSFT);
        shift_tap_tracker = 0;
    }

    if (shift_tap_tracker == 1) {
        shift_tap_tracker = 0; // If another key is pressed before shift is released, don't let shift lock on
    }

    fn_switch_tracker = 0; // If another key is pressed before fnswitch is released, don't let fnswitch lock on...
    piro_switch_tracker = 0; // ...and same for piro
    return true; // We didn't handle other keypresses
};

void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_sethsv_noeeprom(0, 0, 0);
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(28, RGB_WHITE);
    }

    if (layer_state_is(PIRO)) {
        rgb_matrix_set_color(54, RGB_WHITE);
        rgb_matrix_set_color(59, RGB_WHITE); // Turn on piro key lights.
    }

    if (layer_state_is(SUPERPIRO)) {
        rgb_matrix_set_color(54, RGB_WHITE);
        rgb_matrix_set_color(59, RGB_WHITE); // Turn on piro key lights, and...

        rgb_matrix_set_color(56, RGB_WHITE); // ...turn on spacebar light.
    }

    if (layer_state_is(FN)) {
        rgb_matrix_set_color(55, RGB_WHITE);
        rgb_matrix_set_color(58, RGB_WHITE); // Turn on fn key lights.
    } 

    if (layer_state_is(SUPERFN)) {
        rgb_matrix_set_color(55, RGB_WHITE);
        rgb_matrix_set_color(58, RGB_WHITE); // Turn on fn key lights, and...

        rgb_matrix_set_color(56, RGB_WHITE); // ...turn on spacebar light.
    }

    if (layer_state_is(CALC)) {
        rgb_matrix_set_color(1, RGB_PURPLE);
        rgb_matrix_set_color(2, RGB_PURPLE);
        rgb_matrix_set_color(3, RGB_PURPLE);
        rgb_matrix_set_color(15, RGB_PURPLE);
        rgb_matrix_set_color(16, RGB_PURPLE);
        rgb_matrix_set_color(17, RGB_PURPLE);
        rgb_matrix_set_color(29, RGB_PURPLE);
        rgb_matrix_set_color(30, RGB_PURPLE);
        rgb_matrix_set_color(31, RGB_PURPLE);
        rgb_matrix_set_color(43, RGB_PURPLE);

        // Turn on calc key lights.
    }

    if (layer_state_is(ACCESS)) {
        for (int i=1; i<61; i++) {
            rgb_matrix_set_color(i, RGB_RED); // Turn all lights red.
        }
    }

    return false;
}