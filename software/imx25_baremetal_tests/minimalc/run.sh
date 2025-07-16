#!/bin/bash
cd ../../pyATK/bin
# sudo python3 mx-toolkit.py listbsp
sudo python3 mx-toolkit.py run -b mx25 ../../Test/MinimalC/minimalc.bin 0x81200000 -i meminit.txt
