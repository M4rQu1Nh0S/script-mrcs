#!/bin/sh
sudo apt install dkms
sudo mkdir -p /usr/src/r8168-8.050.03
sudo cp -Tr ./src/ /usr/src/r8168-8.050.03
sudo dkms add -m r8168 -v 8.050.03
sudo dkms build -m r8168 -v 8.050.03
sudo dkms install -m r8168 -v 8.050.03
echo "Reboot the system"
