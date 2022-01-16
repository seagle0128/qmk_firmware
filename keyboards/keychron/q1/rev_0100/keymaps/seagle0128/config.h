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

#pragma once

/* RGB Matrix Configuration */
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define CAPS_LOCK_INDICATOR_COLOR RGB_RED
#    define FN_LAYER_COLOR RGB_CYAN
#    define RESET_INDICATOR_COLOR RGB_RED
#endif

/* Encoder Configuration */
#ifdef ENCODER_ENABLE
#    define TAP_CODE_DELAY 10
#    define ENCODERS_PAD_A { E6 }
#    define ENCODERS_PAD_B { B7 }
#    define ENCODER_RESOLUTION 2
#endif

// RGB Matrix Animation modes. Explicitly enabled
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL

/* #define RGB_MATRIX_KEYPRESSES */
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
