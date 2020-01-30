# Quefrency - 60%

## Flashing

I'm super cheap, so I opted to use a pro micro clone in the slave. The elite c and the pro micro use different bootloaders, so we must override `BOOTLOADER` that's defined in `rules.mk`. See instructions below.

### Left - *Master*

Controller: `Elite C`

```
sudo make keebio/quefrency/rev1:ht:dfu
```
*NOTE:* The default bootloader is `atmel-dfu`. See `rules.mk`

### Right - *Slave*

Controller: `Pro Micro`

```
sudo make BOOTLOADER=caterina keebio/quefrency/rev1:ht:avrdude
```

