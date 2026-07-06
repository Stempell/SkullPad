# skullpad

Im buliding this macropad for Hack Club's stardance program! I'll be using it for shortcuts and volume controll. The Keys work as shown:

 ┌───┬───┬───┐			Key A - Win + E (opens file explorer)
 │  A │  B │  C │			Key B - Ctrl + M (it mutes my discord mic)
 ├───┼───┼───┤			Key C - Delete Key
 │  D │  E │  F │			Key D - Previous track
 └───┴───┴───┘			Key E - Play / Pause
			    Key F - Next track

* Keyboard Maintainer: [Wiktor Stępień](https://github.com/Stempell)

Make example for this keyboard (after setting up your build environment):

    make skullpad:default

Flashing example for this keyboard:

    make skullpad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
