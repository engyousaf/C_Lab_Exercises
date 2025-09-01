#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int a = -3, b = 5;
    printf("ABS(%d) = %d\n", a, ABS(a));
    printf("ABS(%d) = %d\n", b, ABS(b));
    return 0;
}
