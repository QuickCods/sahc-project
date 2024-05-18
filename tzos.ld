SECTIONS {
    . = 0x44000000;
    .text : {
        *(.text*)
    }
    . = 0x44004000;
    .data : {
        *(.data*)
    }
    .bss : {
        *(.bss*)
    }
}
