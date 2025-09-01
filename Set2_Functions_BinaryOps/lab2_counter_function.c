#include <stdio.h>

// Counter function that increments every call
int counter() {
    static int count = 0; // static keeps value across function calls
    count++;
    return count;
}

int main() {
    printf("Call 1: %d\n", counter());
    printf("Call 2: %d\n", counter());
    printf("Call 3: %d\n", counter());
    printf("Call 4: %d\n", counter());
    return 0;
}
