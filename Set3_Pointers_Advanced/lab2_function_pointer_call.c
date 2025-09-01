#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Function pointer declaration
    int (*funcPtr)(int, int);

    // Assign function to pointer
    funcPtr = add;

    // Call function using pointer
    int result = funcPtr(5, 7);

    printf("Result of add(5, 7) = %d\n", result);

    return 0;
}
