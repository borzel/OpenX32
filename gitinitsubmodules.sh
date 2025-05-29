#!/bin/bash
echo "Preparing u-boot v2020.10..."
cd u-boot
git init
git remote add origin https://github.com/u-boot/u-boot.git
git fetch --depth 1 origin v2020.10
git checkout v2020.10
cd ..

echo "Preparing linux v6.12 LTS..."
cd linux
git init
git remote add origin https://github.com/torvalds/linux.git
git fetch --depth 1 origin v6.12
git checkout v6.12
cd ..

echo "pyATK will be cloned with full history..."

echo "Checking out..."
git submodule update --init --recursive

echo "Done."
