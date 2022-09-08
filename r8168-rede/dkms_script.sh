#!/bin/sh
sudo apt install dkms
sudo mkdir -p /usr/src/r8168-8.050.00
sudo cp -r ./src /usr/src/r8168-8.050.00
sudo dkms add -m r8168 -v 8.050.00
sudo dkms build -m r8168 -v 8.050.00
sudo dkms install -m r8168 -v 8.050.00
echo "Reboot the system"
