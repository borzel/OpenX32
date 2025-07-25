/* Linker script for generic */

ENTRY(ResetHandler)

SECTIONS
{
        . = 0x81200000;
        .text :
        {
          *(.vectors);
      *(.text)
         }
        .data : { *(.data) }
        .bss :
        {
        __bss_start = .;
        *(.bss)
        __bss_end = .;
        _end = .;
        }
        . = 0x81200000 + 0x1C000;
        .stack :
        {
         STACK_ADR = .;
        }
}

