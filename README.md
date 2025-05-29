# OpenX32 - A linux-based operating system for the Behringer X32

This repository contains software to load and start the Linux-Kernel on the Behringer X32. This audio-mixing-console uses a Freescale/NXP i.MX253 Microcontroller with an ARM926EJ-S core that supports booting Linux.

## General idea
The Behringer X32 has an USB-Type-B-Connector and two hidden switches at its back. The USB-connector is connected to an NXP i.MX253 microcontroller while the two switches are connected to its reset and boot-mode-switch. This allows us to boot the system in a firmware-update-mode.

Using the pyATK-software we can upload individual files directly to the RAM of the controller. Here a 64MB LPDDR is connected to the controller, so that we can upload a full linux-environment together with a bootloader and a DeviceTreeBlob for the individual hardware of the X32.

As the linux is started from RAM directly, this project is a temporary replacement of the mixer. After a power-cycle, the original firmware is in place again. But its possible to replace the original SD-card with a new one containing the OpenX32, to boot the linux automatically after a power-cycle.

## Steps to compile and load the new operating system

### Init Git-Submodules
This repository uses other GitHub-repositories as submodules (u-Boot, Linux and pyATK). Please use the following command to checkout the main-repo together with submodules. To minimze the download-size and -time, we will clone the submodules separately:
```
git clone --depth 1 https://github.com/xn--nding-jua/OpenX32.git
cd openx32
./gitinitsubmodules.sh
```

### Run the scripts

1. Setup your debian-based system by calling the script ./setup.sh (tested with Debian 12)
2. Compile u-boot and Linux by calling the script ./compile.sh
3. Upload the new operating system by calling the script ./run.sh

* setup.sh will install several dependencies to compile u-boot and the linux-kernel. After installing the packets, it will clone three repositories to ~/GitCheckout: pyATK, u-boot (v2020.10 as the last U-Boot supporting the i.MX25) and linux (v6.12, the most recent LTS-kernel). After downloading it will configure pyATK in a virtual python-environment and reconfigure the u-boot and linux-kernel with some patched files to support the X32.
* compile.sh will compile a small program called "miniloader", the U-Boot-bootloader and the Linux kernel. The kernel-image "zImage" will be converted to a "uImage" and will be merged together with the miniloader and u-boot-image into a single binary-file.
* Finally, run.sh will use pyATK to initialize the most important hardware of the i.MX253 using the file "meminit.txt" and upload the generated binary-blob into the RAM of the processor. The Serial-Download-Program of the i.MX will then start the small assembler-program "miniloader" placed at address 0x80000000 - hence the begin of the RAM. The only task of Miniloader is to jumpstart the U-Boot-Bootloader at offset 0x3C0. U-Boot is placed at offset 0x0C0, but the first function-entry of the U-Boot will not start when using the Serial-Download-Program. So with this small hack, U-Boot takes control over the i.MX, reallocate itself to a higher memory-region and starts the linux-kernel together with the DeviceTreeBlob. The kernel is then decompressed and will start up.

## ToDos
This project is in an early stage and lot of things have to be done:
* [ ] implement a function to upload original FPGA-bitstream to the X32-FPGA from the original firmware to initialize the heart of the audio-processing
* [ ] reverse-engineer the communication-protocol between the individual hardware-components (e.g. faderboards) and the i.MX253
* [ ] implement a nice user-interface to control things
* [ ] test this system using an SD-card
* [ ] more funny stuff

## What's the reason for developing such a thing?
I want to learn things about embedded systems and how they work. The X32 is a very powerful playground with lots of different controllers, nice faders and displays. So that's the only reason why I'm doing this :-)

## Used third-party software
* U-Boot in Version 2020.10 (https://github.com/u-boot/u-boot/tree/v2020.10)
* Linux in Version 6.12 (https://github.com/torvalds/linnux/tree/v6.12)
* Busybox (https://git.busybox.net/busybox)
* pyATK in Version 0.1.0 (https://github.com/hbock/pyatk)
