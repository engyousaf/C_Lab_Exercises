#include <stdio.h>
#include <stdint.h>

// Function to swap endianness
uint32_t swapEndian(uint32_t num) {
    return ((num >> 24) & 0x000000FF) |
           ((num >> 8)  & 0x0000FF00) |
           ((num << 8)  & 0x00FF0000) |
           ((num << 24) & 0xFF000000);
}

int main() {
    uint32_t num = 0x12345678;

    printf("Original : 0x%08X\n", num);
    printf("Swapped  : 0x%08X\n", swapEndian(num));

    return 0;
}
