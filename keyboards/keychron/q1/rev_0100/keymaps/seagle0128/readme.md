## seagle0128 Keychron Q1 keymap (ANSI rev_0100) v1.0.5

This keymap builds on the keymap by Mike Killewald (mikekillewald), and support EC11 rotary encoder.

## Features:
- Support EC11 rotary encoder
  - Default:  Volume Up/Down
  - Shift:    Mouse Wheel Down/Up
  - Ctrl:     Page Down/Up
  - Alt:      Left/Right
  - Win/Cmd:  Zoom In/Out. Push button to reset
  - RGB indicator:
        - Fn+B will toggle mute or play/stop. (default: mute)
        - Applicable for the browsers and some applications, but not all.

- On macOS, F3 opens Mission Control and F4 opens Launchpad without needing to configure shortcuts in System Preferences
- RGB lighting turns off when the computer sleeps
- Caps Lock RGB indicator
    - the Caps Lock key will light when Caps Lock is enabled with the following options:
        - #define CAPS_LOCK_INDICATOR_COLOR [color] in config.h to set the backlight color used for the indicator when Caps Lock is enabled (default: red)
        - Fn+Z will toggle lighting the TAB key when Caps Lock is enabled. This is useful with non backlit keycaps/legends. (default: on)
        - Fn+X will toggle lighting all the alpha keys when Caps Lock is enabled. (default: off)

- Dynamic Fn layer RGB indicator
    - When the Fn key is held down, any keys defined on the Fn layer in this firmware or in VIA will be highlighted with the following options:
        - #define FN_LAYER_COLOR [color] in config.h to set a static color for defined keys (default: orange)
        - Fn+C will toggle turning off RGB for keys with no definition (default: RGB on)
        - Fn+V will toggle lighting the defined Fn layer keys with the static color set with FN_LAYER_COLOR (default: static color off)

- All custom keycodes can be moved to different keys in VIA by using the ANY key with the following keycodes:
    - USER00 (default: F3) macOS Mission Control
    - USER01 (default: F4) macOS Launchpad
    - USER02 (default: Fn+Z) Caps Lock light Tab toggle
    - USER03 (default: Fn+X) Caps Lock light alphas toggle
    - USER04 (default: Fn+C) Fn layer non-defined keys RGB toggle
    - USER05 (default: Fn+V) Fn layer defined keys static color toggle
    - USER06 (default: Fn+B) Rotary encoder mute/play toggle

RGB must be toggled on for all indicators to function. If you do not want an RGB mode active but still want the indicators, toggle RGB on and turn the brightness all the way off. The indicators will remain at full brightness.

Please make sure to save any customizations you have made in VIA to a .json file before flashing the firmware. Sometimes it has been necessary to re-apply those changes in VIA after flashing the firmware. If that is the case, you will most likely need to manually add the USER00 through USER05 custom keycodes after loading your customizations from the saved .json file. Then re-save a new .json file which will have your previous customizations and the custom keycodes for future use as needed.

#### USE AT YOUR OWN RISK

## Changelog:

v1.0.3 November 27, 2021
- Enter bootloader mode for flashing via "Ctrl+Shift+ALt+Win+R"
- Enable Alt modifier for the rotary encoder

v1.0.2 November 23, 2021
- New via.json to support customized keycodes in VIA
- Enable Win/Cmd modifier for the rotary encoder

v1.0.1 November 21, 2021
- More functionalities with modifers for the rotary encoder
- RGB indicator for toggling mute or play/stop

v1.0.0 November 18, 2021
- Initial release built upon keymap by Mike Killewald (mikekillewald)
- Enable EC11 rotary encoder
- Turn colckwise to increase volume and turn counter-colckwise to decrease volume
- Press top right key pushbutton to mute
