#include <stdio.h>
#include <stdint.h>

// Function to modify the 2 MSBs of an unsigned int
unsigned int modifyMSB(unsigned int num, unsigned int value) {
    // Clear the top 2 bits
    num &= 0x3FFFFFFF;  
    // Set new MSBs (only 2 bits allowed from value)
    num |= ((value & 0x3) << 30);
    return num;
}

int main() {
    unsigned int num = 0x12345678;
    printf("Original: 0x%08X\n", num);

    unsigned int modified = modifyMSB(num, 0x2); // set MSBs = binary 10
    printf("Modified: 0x%08X\n", modified);

    return 0;
}
