#!/bin/bash
echo "Uploading OpenX32 via Serial Download Protocol (USB-OTG) to RAM at Address 0x80000000..."
cd ../pyatk/bin
source pyatk_venv/bin/activate
# sudo python3 mx-toolkit.py listbsp
sudo python3 mx-toolkit.py run -b mx25 ../../openx32.bin 0x80000000 -i meminit.txt
deactivate
echo "Done."
