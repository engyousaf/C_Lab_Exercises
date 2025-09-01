#include <stdio.h>

// Custom strcpy function
char* myStrcpy(char *dest, const char *src) {
    char *ptr = dest;
    while ((*ptr++ = *src++) != '\0');
    return dest;
}

int main() {
    char src[] = "Hello, World!";
    char dest[50];

    myStrcpy(dest, src);

    printf("Copied string: %s\n", dest);
    return 0;
}
