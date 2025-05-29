#!/bin/bash
echo "Preparing checkout of u-boot v2020.10..."
cd u-boot
git init
git remote add origin https://github.com/u-boot/u-boot.git
git fetch --depth 1 origin tag v2020.10
git checkout v2020.10
cd ..

echo "Preparing checkout of linux v6.12 LTS..."
cd linux
git init
git remote add origin https://github.com/torvalds/linux.git
git fetch --depth 1 origin tag v6.12
git checkout v6.12
cd ..

echo "pyATK and busybox will be cloned with full history..."

echo "Checking out all submodules..."
git submodule update --init --recursive

echo "Done."
