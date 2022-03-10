# seagle0128 Keychron Q1 keymap (ANSI rev_0101)

## Features

- Support EC11 rotary encoder
    - Default:  Volume Down/UP, Mute/Unmute
    - Fn:       Bright Down/Up, Play/Stop
    - Shift:    Down/Up
    - Ctrl:     Page Down/Up
    - Alt:      Left/Right
    - Win/Cmd:  Zoom In/Out. Push button to reset. Applicable for the browsers and some applications
- Enter bootloader mode for flashing via `Fn+Del`. The RGB light is always red. No need to pull the SPACE keycap up now
- Allow to configure RGB lighting in VIA.
- On macOS, `F3` opens Mission Control and `F4` opens Launchpad without needing to configure shortcuts in System Preferences
- Toggle N-Key Rollover (NKRO) via `Fn+Y`. On macOS, turning it off is able to address the conflict issue between Caps lock and input methods switching.
- RGB lighting turns off when the computer sleeps
- Caps Lock RGB indicator (default: red)
    - the Caps Lock key will light when Caps Lock is enabled with the following options:
        - #define CAPS_LOCK_INDICATOR_COLOR [color] in config.h to set the backlight color used for the indicator when Caps Lock is enabled (default: red)
- Dynamic Fn layer RGB indicator
    - When the Fn key is held down, any keys defined on the Fn layer in this firmware or in VIA will be highlighted with the following options:
        - #define FN_LAYER_COLOR [color] in config.h to set a static color for defined keys (default: cyan)

RGB must be toggled on for all indicators to function. If you do not want an RGB mode active but still want the indicators, toggle RGB on and turn the brightness all the way off. The indicators will remain at full brightness.

*USE AT YOUR OWN RISK*

## Changelog:

v2.0.0 March 11, 2022

- Improve the keymap layout in VIA.
- Add NKRO toggle.
- Remove toggles to avoid blank issue in VIA.
- Better default configurations.
