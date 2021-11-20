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
#    define FN_LAYER_COLOR RGB_ORANGE
#endif

/* Encoder Configuration */
#ifdef ENCODER_ENABLE
#    define TAP_CODE_DELAY 10
#    define ENCODERS_PAD_A { B7 }
#    define ENCODERS_PAD_B { E6 }
#    define ENCODER_RESOLUTION 4
#endif
