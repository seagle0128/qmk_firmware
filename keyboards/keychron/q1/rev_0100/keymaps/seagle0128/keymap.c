/* Copyright 2021 @ Vincent Zhang
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
#include "keymap_user.h"
#ifdef RGB_MATRIX_ENABLE
#    include "rgb_matrix_user.h"
#endif

// clang-format off

typedef union {
  uint32_t raw;
  struct {
    bool caps_lock_light_tab :1;
    bool caps_lock_light_alphas :1;
    bool fn_layer_transparent_keys_off :1;
    bool fn_layer_color_enable :1;
    bool rotary_encoder :1;
    bool rotary_encoder_button :1;
  };
} user_config_t;

user_config_t user_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[MAC_BASE] = LAYOUT_ansi_82(
     KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,   KC_REB,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
     KC_LCTL,  KC_LALT,  KC_LGUI,                                KC_SPC,                                 KC_RGUI, MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[MAC_FN] = LAYOUT_ansi_82(
     KC_TRNS,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   RESET,    KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_LTTOG, KC_LATOG, KC_TKTOG, KC_FCTOG, KC_RETOG, KC_REBTOG,KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[WIN_BASE] = LAYOUT_ansi_82(
     KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_REB,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_ansi_82(
     KC_TRNS,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  RESET,    KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_LTTOG, KC_LATOG, KC_TKTOG, KC_FCTOG, KC_RETOG, KC_REBTOG,KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)

};

// clang-format on

void matrix_init_user(void) {
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_init_user();
#endif
}

void keyboard_post_init_user(void) {
    user_config.raw = eeconfig_read_user();
}

void eeconfig_init_user(void) {
    user_config.raw = 0;
    user_config.caps_lock_light_tab = false;
    user_config.caps_lock_light_alphas = true;
    user_config.fn_layer_transparent_keys_off = true;
    user_config.fn_layer_color_enable = false;
    user_config.rotary_encoder = false;
    user_config.rotary_encoder_button = false;
    eeconfig_update_user(user_config.raw);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_MISSION_CONTROL:
            if (record->event.pressed) {
                host_consumer_send(0x29F);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        case KC_LAUNCHPAD:
            if (record->event.pressed) {
                host_consumer_send(0x2A0);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        case KC_LIGHT_TAB_TOGGLE:
            if (record->event.pressed) {
                user_config.caps_lock_light_tab ^= 1; // bitwise xor to toggle status bit
                eeconfig_update_user(user_config.raw);
            }
            return false;  // Skip all further processing of this key
        case KC_LIGHT_ALPHAS_TOGGLE:
            if (record->event.pressed) {
                user_config.caps_lock_light_alphas ^= 1;
                eeconfig_update_user(user_config.raw);
            }
            return false;  // Skip all further processing of this key
        case KC_FN_LAYER_TRANSPARENT_KEYS_TOGGLE:
            if (record->event.pressed) {
                user_config.fn_layer_transparent_keys_off ^= 1;
                eeconfig_update_user(user_config.raw);
            }
            return false;  // Skip all further processing of this key
        case KC_FN_LAYER_COLOR_TOGGLE:
            if (record->event.pressed) {
                user_config.fn_layer_color_enable ^= 1;
                eeconfig_update_user(user_config.raw);
            }
            return false;  // Skip all further processing of this key
        case KC_ROTARY_ENCODER_TOGGLE:
            if (record->event.pressed) {
                user_config.rotary_encoder ^= 1;
                eeconfig_update_user(user_config.raw);
            }
            return false;  // Skip all further processing of this key
        case KC_ROTARY_ENCODER_BUTTON_TOGGLE:
            if (record->event.pressed) {
                user_config.rotary_encoder_button ^= 1;
                eeconfig_update_user(user_config.raw);
            }
            return false;  // Skip all further processing of this key
        case KC_ROTARY_ENCODER_BUTTON:
            if (record->event.pressed) {
                if ((get_mods() == MOD_BIT(KC_LGUI)) || (get_mods() == MOD_BIT(KC_RGUI))) {
                    uint8_t mod_state = get_mods();
                    unregister_mods(MOD_MASK_GUI);

                    // Reset zoom
                    uint8_t current_layer = get_highest_layer(layer_state);
                    switch (current_layer) {
                    case MAC_BASE:
                        tap_code16(G(KC_0));
                        break;
                    case WIN_BASE:
                        tap_code16(C(KC_0));
                        break;
                    default:
                        break;
                    }

                    set_mods(mod_state);
                } else if (get_rotary_encoder_button()) {
                    register_code(KC_MPLY);
                    unregister_code(KC_MPLY);
                } else {
                    register_code(KC_MUTE);
                    unregister_code(KC_MUTE);
                }
            }
            return false;  // Process the keycode normally
        default:
            return true;  // Process all other keycodes normally
    }
}

bool get_caps_lock_light_tab(void) {
    return user_config.caps_lock_light_tab;
}

bool get_caps_lock_light_alphas(void) {
    return user_config.caps_lock_light_alphas;
}

bool get_fn_layer_transparent_keys_off(void) {
    return user_config.fn_layer_transparent_keys_off;
}

bool get_fn_layer_color_enable(void) {
    return user_config.fn_layer_color_enable;
}

bool get_rotary_encoder(void) {
    return user_config.rotary_encoder;
}

bool get_rotary_encoder_button(void) {
    return user_config.rotary_encoder_button;
}

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    // https://beta.docs.qmk.fm/using-qmk/simple-keycodes/feature_advanced_keycodes#alt-escape-for-alt-tab-id-alt-escape-for-alt-tab
    if ((get_mods() == MOD_BIT(KC_LCTRL)) || (get_mods() == MOD_BIT(KC_RCTRL))) {   // If CTRL is held
        uint8_t mod_state = get_mods(); // Store all  modifiers that are held
        unregister_mods(MOD_MASK_CTRL); // Immediately unregister the CRTL key (don't send CTRL-PgDn) - del_mods doesn't work here (not immediate)
        tap_code(clockwise ? KC_PGDN : KC_PGUP);
        set_mods(mod_state); // Add back in the CTRL key - so ctrl-key will work if ctrl was never released after paging.
    } else if ((get_mods() == MOD_BIT(KC_LSHIFT)) || (get_mods() == MOD_BIT(KC_RSHIFT))) {
        uint8_t mod_state = get_mods();
        unregister_mods(MOD_MASK_SHIFT);
#ifdef MOUSEKEY_ENABLE   // If using the mouse scroll - make sure MOUSEKEY is enabled
        tap_code(clockwise ? KC_MS_WH_DOWN : KC_MS_WH_UP);
#else
        tap_code(clockwise ? KC_UP : KC_DOWN);
#endif
        set_mods(mod_state);
    } else if ((get_mods() == MOD_BIT(KC_LALT)) || (get_mods() == MOD_BIT(KC_RALT))) {
        uint8_t mod_state = get_mods();
        unregister_mods(MOD_MASK_ALT);
        tap_code(clockwise ? KC_RIGHT : KC_LEFT);
        set_mods(mod_state);
    } else if ((get_mods() == MOD_BIT(KC_LGUI)) || (get_mods() == MOD_BIT(KC_RGUI))) {
        uint8_t mod_state = get_mods();
        unregister_mods(MOD_MASK_GUI);

        uint8_t current_layer = get_highest_layer(layer_state);
        switch (current_layer) {
        case MAC_BASE:
            tap_code16(clockwise ? G(KC_EQL) : G(KC_MINS));
            break;
        case WIN_BASE:
            tap_code16(clockwise ? C(KC_EQL) : C(KC_MINS));
            break;
        default:
            break;
        }

        set_mods(mod_state);
    } else if (get_rotary_encoder()) {
        tap_code(clockwise ? KC_BRIU : KC_BRID);
    } else {
        tap_code(clockwise ? KC_VOLU : KC_VOLD);
    }

    return true;
}
#endif
