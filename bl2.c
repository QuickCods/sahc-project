// bl2.c
void main() {
    // Simple bootloader message
    volatile char *uart = (char *)0x09000000;
    *uart = 'B';
    *uart = 'L';
    *uart = '2';
    *uart = '\n';

    // Normally, more initialization code goes here
    // Jump to TrustZone OS at 0x44000000
    void (*tzos)(void) = (void (*)(void))0x44000000;
    tzos();
}
