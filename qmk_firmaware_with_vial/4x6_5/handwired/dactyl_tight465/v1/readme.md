# handwired\dactyl_tight465\v1

[![handwired\dactyl_tight365\v1](https://i.imgur.com/LRyUMla.jpeg)

* Keyboard Maintainer: [Okke Formsma] (https://github.com/okke-formsma)
* Hardware Supported: Atmega32u4

----------------------------------------------------------------------------

QMK:Make example for this keyboard (after setting up your build environment):

    make handwired\dactyl_tight465\v1:default

Flashing example for each half of this keyboard:

    qmk flash -kb handwired/dactyl_tight465/v1 -km default -bl avrdude-split-left
    qmk flash -kb handwired/dactyl_tight465/v1 -km default -bl avrdude-split-right

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

----------------------------------------------------------------------------

VIAL:Make example for this keyboard (after setting up your build environment):

    make handwired\dactyl_tight465\v1:vial

Flashing example for each half of this keyboard:

    qmk flash -kb handwired/dactyl_tight465/v1 -km vial -bl avrdude-split-left
    qmk flash -kb handwired/dactyl_tight465/v1 -km vial -bl avrdude-split-right


See the [Prepare Your Build Environment](https://get.vial.today/docs/porting-to-vial.html#step-by-step-guide) and the [make instructions](https://get.vial.today/docs/porting-to-vial.html#7-compile-vial-firmware-for-your-keyboard) for more information. First time use VIAL? Start with [User Manual](https://get.vial.today/manual/).

