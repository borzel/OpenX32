#!/bin/sh

# create symlinks to programs and configuration
ln -s /mnt/usb/usr/local/libexec /usr/local/libexec
ln -s /mnt/usb/usr/local/etc/sshd_config /usr/local/etc/sshd_config

# create or copy host-keys

# check if we already have a key available
if [ ! -f "/mnt/usb/usr/local/etc/ssh/openx32_key" ]; then
  # no SSH-keys found -> create ssh-keys
  /mnt/usb/bin/ssh-keygen -b 2048 -f /mnt/usb/usr/local/etc/ssh/openx32_key -N ""
fi

mkdir /usr/local/etc/ssh
cp /mnt/usb/usr/local/etc/ssh/openx32_key /usr/local/etc/ssh/
cp /mnt/usb/usr/local/etc/ssh/openx32_key.pub /usr/local/etc/ssh/
chmod -R 600 /usr/local/etc/ssh

# start sshd
LD_LIBRARY_PATH=/mnt/usb/lib /mnt/usb/sbin/sshd -f /usr/local/etc/sshd_config
