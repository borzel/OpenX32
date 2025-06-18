# OpenX32 - A linux-based operating system for the Behringer X32

This repository contains software to load and start the Linux-Kernel on the Behringer X32. This audio-mixing-console uses a Freescale/NXP i.MX253 Microcontroller with an ARM926EJ-S core that supports booting Linux.

![alt_text](Documentation/openx32_1.jpg)

Currently the Linux Kernel is running in Version 6.12 (LTS) together with busybox and:

![alt_text](Documentation/openx32_2.jpg)

More information on my related Youtube-Video:

[![alt text](https://img.youtube.com/vi/6CfLC5xVy90/0.jpg)](https://www.youtube.com/watch?v=6CfLC5xVy90)

## General idea
The Behringer X32 has an USB-Type-B-Connector and two hidden switches at its back. The USB-connector is connected to an NXP i.MX253 microcontroller while the two switches are connected to its reset and boot-mode-switch. This allows us to boot the system in a firmware-update-mode.

Using the pyATK-software we can upload individual files directly to the RAM of the controller. Here a 64MB LPDDR is connected to the controller, so that we can upload a full linux-environment together with a bootloader and a DeviceTreeBlob for the individual hardware of the X32.

As the linux is started from RAM directly, this project is a temporary replacement of the mixer. After a power-cycle, the original firmware is in place again. But its possible to replace the original SD-card with a new one containing the OpenX32, to boot the linux automatically after a power-cycle.

## Steps to compile and load the new operating system

### Step 1: Init Git-Submodules and install dependencies
This system uses the most recent versions of the tools I could find: the bootloader u-Boot is used in Version 2020.10 as this is the last U-Boot supporting the i.MX25. Up to now Linux has still support for the i.MX25 and I selected v6.12, the most recent LTS-kernel.

So the repository uses other GitHub-repositories as submodules (u-Boot, Linux and pyATK). Please use the following command to checkout the main-repo together with submodules. To minimze the download-size and -time, we will clone the submodules separately:

```
git clone --depth 1 https://github.com/xn--nding-jua/OpenX32.git
cd openx32
./gitinitsubmodules.sh
```

Next to the sourcecode, your system needs to be setup correctly to compile the whole system: setup your debian-based system by calling the script ./setup.sh (tested with Debian 12)

setup.sh will install several dependencies to compile u-boot and the linux-kernel. After installing the packets, it will patch pyATK to run with recent versions of Python 3.11 and newer. It will also configure pyATK in a virtual python-environment.


### Step 2: Run the scripts

1. Compile u-boot, Linux and busbox by calling the script ./compile_all.sh
2. Upload the new operating system into the RAM by calling the script ./run.sh

* compile.sh will copy some patched files into the submodules, compile a small program called "miniloader", the U-Boot-bootloader and the Linux kernel. The kernel-image "zImage" will be converted to a "uImage" and will be merged together with the miniloader and u-boot-image into a single binary-file.
* Finally, run.sh will use pyATK to initialize the most important hardware of the i.MX253 using the file "meminit.txt" and upload the generated binary-blob into the RAM of the processor. The Serial-Download-Program of the i.MX will then start the small assembler-program "miniloader" placed at address 0x80000000 - hence the begin of the RAM. The only task of Miniloader is to jumpstart the U-Boot-Bootloader at offset 0x3C0. U-Boot is placed at offset 0x0C0, but the first function-entry of the U-Boot will not start when using the Serial-Download-Program. So with this small hack, U-Boot takes control over the i.MX, reallocate itself to a higher memory-region and starts the linux-kernel together with the DeviceTreeBlob. The kernel is then decompressed and will start up.

## What is working at the moment
* [x] Linux-Kernel starts to shell (Display and MIDI In/Out)
* [x] Support of 800x480 framebuffer for applications
* [x] Full 10/100MBit network-support with DHCP
* [x] USB-Host support (HID-Keyboard, Mass-Storage-Devices, etc.)
* [x] Realtime-Clock
* [x] Control of I2C- and SPI-Bus
* [x] init-script for setting up the operating system

## Connecting a serial terminal to MIDI In/Out
The MIDI-Ports are connected to the UART5 of the i.MX25. With a simple resistor and a RS232/USB-converter the MIDI-ports can be used for a serial-terminal with 115200 baud:

    MIDI Out+ o---->---|       MIDI GND o------|          +5V o----->----o MIDI In+
      Pin 4          -----       Pin 2         o                           Pin 4
                     |   |                Pin 5 (GND)
                     |4k7|
      Pin 5          |___|                                                 Pin 5
    MIDI OUT- o----<---|----->----o Pin 2 (RxD)   Pin 3 (TxD) o-----<----o MIDI In-

## ToDos
This project is in an early stage and lot of things have to be done:
* [ ] implement a function to upload original FPGA-bitstream to the X32-FPGA from the original firmware to initialize the heart of the audio-processing
* [ ] reverse-engineer the communication-protocol between the individual hardware-components (e.g. faderboards) and the i.MX253
* [ ] implement a nice user-interface to control things
* [ ] test this system using an SD-card
* [ ] more funny stuff

LVGL v9.3.0 is running on the X32 with a good performance (30 fps). So this could be a basis for an open-source Operating System:
![alt_text](Documentation/openx32_3.jpg)

## What's the reason for developing such a thing?
I want to learn things about embedded systems and how they work. The X32 is a very powerful playground with lots of different controllers, nice faders and displays. So that's the only reason why I'm doing this :-)

## Used third-party software
* U-Boot in Version 2020.10 (https://github.com/u-boot/u-boot/tree/v2020.10)
* Linux in Version 6.12 (https://github.com/torvalds/linnux/tree/v6.12)
* Busybox (https://git.busybox.net/busybox)
* pyATK in Version 0.1.0 (https://github.com/hbock/pyatk)
