#!/bin/sh

# This shell-script starts some useful software-tools from the USB-Thumbdrive
# as the X32 has only limited amount of RAM and the SD-Card is quite hard to
# access. So by calling this script the following tools will be started:
#
# 1. create symlinks for user-software
# 2. startup SSHD
# 3. more to come...
#

# create symlinks
ln -s /mnt/usb/bin/x32ctrl /bin/x32ctrl
ln -s /mnt/usb/bin/uartterminal /bin/uartterminal
ln -s /mnt/usb/bin/fpgaconfig /bin/fpgaconfig

# startup SSH
./startssh.sh

# start more software here...
