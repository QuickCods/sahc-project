SECTIONS {
    . = 0x80000000; /* Example address, adjust as needed */
    .text : {
        *(.text*)
    }
    . = ALIGN(4);
    .data : {
        *(.data*)
    }
    .bss : {
        *(.bss*)
    }
}
