#include <stdio.h>

void puts_half(char *str) {
    int length = 0;

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Calculate the starting index to print the second half
    int start_index = (length + 1) / 2;

    // Print the second half of the string
    while (str[start_index] != '\0') {
        putchar(str[start_index]);
        start_index++;
    }

    putchar('\n');
}

