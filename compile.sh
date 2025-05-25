#!/bin/bash
echo "1/6 Compiling Miniloader..."
cd miniloader
make > /dev/null

echo "2/6 Compiling u-boot..."
cd ../u-boot
ARCH=arm CROSS_COMPILE=/usr/bin/arm-none-eabi- make > /dev/null

echo "3/6 Compiling linux..."
cd ../linux
ARCH=arm CROSS_COMPILE=/usr/bin/arm-linux-gnueabi- make > /dev/null
echo "4/6 Creating zImage..."
ARCH=arm CROSS_COMPILE=/usr/bin/arm-linux-gnueabi- make zImage > /dev/null

echo "5/6 Creating U-Boot-Image..."
mkimage -A ARM -O linux -T kernel -C none -a 0x80060000 -e 0x80060000 -n "Linux kernel (OpenX32)" -d arch/arm/boot/zImage uImage

echo "6/6 Merging Miniloader, U-Boot, Linux kernel and DeviceTreeBlob..."
cd ../openx32
rm openx32.bin
dd if=miniloader/miniloader.bin of=openx32.bin bs=1 conv=notrunc > /dev/null
dd if=../u-boot/u-boot.bin of=openx32.bin bs=1 seek=$((0xC0)) conv=notrunc > /dev/null
dd if=../linux/uImage of=openx32.bin bs=1 seek=$((0x60000)) conv=notrunc > /dev/null
dd if=../linux/arch/arm/boot/dts/imx25-pdk.dtb of=openx32.bin bs=1 seek=$((0x500000)) conv=notrunc > /dev/null

echo "System-Image with Miniloader, u-Boot, Linux Kernel and DeviceTreeBlob is ready: openx32.bin"
