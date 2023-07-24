#include <stdio.h>

void print_rev(char *s) {
    int length = 0;

    // Calculate the length of the string
    while (*s != '\0') {
        length++;
        s++;
    }

    // Move the pointer back to the last character (before the null terminator)
    s--;

    // Print the string in reverse order
    while (length > 0) {
        putchar(*s);
        s--;
        length--;
    }

    putchar('\n');
}

