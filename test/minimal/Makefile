CXXFLAGS = -g -Wall -fmessage-length=0

SOURCES = *.S

LIBS =

TARGET = minimal.elf

$(TARGET):      $(SOURCES)
	arm-none-eabi-gcc $(CXXFLAGS) -o $(TARGET) $(SOURCES) $(LIBS) -T minimal.ld -nostartfiles -nostdlib -Wl,-Map,minimal.map,--cref,-n
	arm-none-eabi-objcopy -O binary minimal.elf minimal.bin

all:    $(TARGET)

clean:
	cs-rm -f $(TARGET)
	cs-rm -f minimal.bin

