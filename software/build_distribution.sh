#!/bin/bash
echo "Creating OpenX32 Distribution..."

# create build-directory
mkdir bin

echo "Compiling x32ctrl..."
cd x32ctrl
make
cd ..

echo "Compiling fpgaconfig..."
cd fpgaconfig
./compile.sh
cd ..

echo "Compiling uartterminal..."
cd uartterminal
./compile.sh
cd ..

echo "Compiling openssh-portable..."
cd openssh-portable
autoreconf
CC=/usr/bin/arm-linux-gnueabi-gcc ./configure --without-openssl 
make
cd ..

echo "Download and copy all files to distribution-folder..."
#TODO
echo " WARNING: THIS FEATURE IS NOT IMPLEMENTED YET. MAYBE ON TUESDAY :-)"

echo "Done."
