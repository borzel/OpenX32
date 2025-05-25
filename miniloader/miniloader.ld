/* Linker script for generic */

ENTRY(ResetHandler)

SECTIONS
{
        . = 0x80000000;
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
        . = 0x80000000 + 0x1C000;
        .stack :
        {
         STACK_ADR = .;
        }
}

