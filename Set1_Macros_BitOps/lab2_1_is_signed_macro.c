#include <stdio.h>

#define IS_SIGNED(type) (((type)(-1)) < (type)0)

int main() {
    printf("char: %s\n", IS_SIGNED(char) ? "signed" : "unsigned");
    printf("int: %s\n", IS_SIGNED(int) ? "signed" : "unsigned");
    printf("unsigned int: %s\n", IS_SIGNED(unsigned int) ? "signed" : "unsigned");
    printf("long: %s\n", IS_SIGNED(long) ? "signed" : "unsigned");
    printf("unsigned long: %s\n", IS_SIGNED(unsigned long) ? "signed" : "unsigned");
    return 0;
}
