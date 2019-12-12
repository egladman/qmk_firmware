# The Wombat

A no frills opensource 40% keyboard with an intuitive keymap and layout. Read more [here](https://github.com/egladman/wombat-pcb/blob/revc/README.md).

* Keyboard Maintainer: [Eli Gladman](https://github.com/egladman)
* Hardware Supported: Pro Micro, Proton C, Elite C
* Hardware Availability: [egladman/wombat-pcb](https://github.com/egladman/wombat-pcb)


#### Compile

**Double check that you're in the `qmk_firmware` directory**

```

make wombat/revc/protonc:default

```



#### Flash

**There's a good chance you'll need to run as `sudo`** 


```
make wombat/revc/protonc:default:dfu-util
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
