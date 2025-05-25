#!/bin/bash
echo "Uploading..."
cd ../../pyATK/bin
# sudo python3 mx-toolkit.py listbsp
sudo python3 mx-toolkit.py run -b mx25 ../../Test/Minimal/minimal.bin 0x81200000 -i meminit.txt

echo "Done."

