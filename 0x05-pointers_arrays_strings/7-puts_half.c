#include <stdio.h>
#include <string.h>

void puts_half(char *str) {
    int length = strlen(str);
    int start_index = (length - 1) / 2;

    for (int i = start_index; i < length; i++) {
        putchar(str[i]);
    }

    putchar('\n');
}

