#CXXFLAGS =	-O2 -g -Wall -fmessage-length=0
#CXXFLAGS =	-O2 -Wall -fmessage-length=0 -s
#CXXFLAGS = -g -Wall -fmessage-length=0 -s 
CXXFLAGS = -g -Wall -fmessage-length=0 

SOURCES = *.c *.S

LIBS = 

TARGET =	minimalc.elf

$(TARGET):	$(SOURCES)
	arm-none-eabi-gcc $(CXXFLAGS) -o $(TARGET) $(SOURCES) $(LIBS) -T minimalc.ld -nostartfiles -nostdlib -Wl,-Map,minimalc.map,--cref,-n
	arm-none-eabi-objcopy -O binary minimalc.elf minimalc.bin
	
all:	$(TARGET)

clean:
	cs-rm -f $(TARGET)
	cs-rm -f minimalc.bin
