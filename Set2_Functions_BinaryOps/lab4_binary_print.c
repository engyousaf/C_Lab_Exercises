#include <stdio.h>

// Function to print binary representation of unsigned int
void binaryPrint(unsigned int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" "); // space after each byte
    }
    printf("\n");
}

int main() {
    unsigned int num = 29;
    printf("Decimal: %u\nBinary : ", num);
    binaryPrint(num);
    return 0;
}
