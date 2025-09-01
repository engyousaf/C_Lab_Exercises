#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>   

// Function to check 4KB alignment
bool is4KBAligned(void *addr) {
    return ((uintptr_t)addr % 4096) == 0;
}

int main() {
    int a;
    void *ptr1 = &a;
    void *ptr2 = (void*)0x1000; // aligned address example

    printf("ptr1 (%p) aligned? %s\n", ptr1, is4KBAligned(ptr1) ? "Yes" : "No");
    printf("ptr2 (%p) aligned? %s\n", ptr2, is4KBAligned(ptr2) ? "Yes" : "No");

    return 0;
}
