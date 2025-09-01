#include <stdio.h>

// Function to return maximum byte value from an unsigned int
unsigned char MaximumByte(unsigned int num) {
    unsigned char max = 0;
    for (int i = 0; i < 4; i++) {
        unsigned char byte = (num >> (i * 8)) & 0xFF;
        if (byte > max)
            max = byte;
    }
    return max;
}

int main() {
    unsigned int num = 0x1234AB56;
    printf("Number: 0x%08X\n", num);
    printf("Maximum byte value: 0x%02X\n", MaximumByte(num));
    return 0;
}
