#!/bin/bash

sleep 3 && pactl set-source-port alsa_input.pci-0000_00_1b.0.analog-stereo analog-input-front-mic
sleep 3 && pactl set-source-port alsa_input.pci-0000_00_1b.0.analog-stereo analog-input-rear-mic
exit;
 
