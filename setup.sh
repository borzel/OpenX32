#!/bin/bash
echo "This script will setup a Debian-based environment to allow compilation of the necessary components..."
echo "Installing important packages..."
sudo apt install libncurses-dev gawk flex bison openssl libssl-dev dkms libelf-dev libudev-dev libpci-dev libiberty-dev autoconf llvm fakeroot build-essential devscripts gcc-arm-none-eabi binutils-arm-none-eabi gcc-arm-linux-gnueabi binutils-arm-linux-gnueabi python3 python3-pip python3.11-venv u-boot-tools

cd ..

echo "Cloning pyATK..."
git clone https://github.com/hbock/pyatk
echo "Cloning U-Boot..."
git clone --branch v2020.10 https://github.com/u-boot/u-boot
echo "Cloning linux..."
git clone --branch v6.12 https://github.com/torvalds/linux
echo "Cloning busybox..."
git clone https://git.busybox.net/busybox

echo "Configuring pyATK..."
cd pyatk
python3 -m venv pyatk_venv
source pyatk_venv/bin/activate
pip install pyserial pyusb==1.0.0
sudo python3 setup.py install
deactivate
cd ../openx32
cp files/meminit.txt ../pyatk/bin/
