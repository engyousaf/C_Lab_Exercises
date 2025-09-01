#include <stdio.h>

// Function to set nth bit
unsigned int setBit(unsigned int num, int n) {
    return num | (1U << n);
}

// Function to clear nth bit
unsigned int clearBit(unsigned int num, int n) {
    return num & ~(1U << n);
}

// Function to toggle nth bit
unsigned int toggleBit(unsigned int num, int n) {
    return num ^ (1U << n);
}

int main() {
    unsigned int x = 29; // 11101 in binary
    printf("Original: %u\n", x);

    printf("Set 1st bit: %u\n", setBit(x, 1));
    printf("Clear 3rd bit: %u\n", clearBit(x, 3));
    printf("Toggle 0th bit: %u\n", toggleBit(x, 0));

    return 0;
}
