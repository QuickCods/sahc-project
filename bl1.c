// bl1.c
void main() {
    // Simple bootloader message
    volatile char *uart = (char *)0x09000000;
    *uart = 'B';
    *uart = 'L';
    *uart = '1';
    *uart = '\n';

    // Normally, more initialization code goes here
    // Jump to BL2 at 0x40000000
    void (*bl2)(void) = (void (*)(void))0x40000000;
    bl2();
}
