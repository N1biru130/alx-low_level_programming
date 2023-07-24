#include <stdio.h>  

int _putchar(char c);

void print_rev(char *s) {
    int length = 0;
    char *end = s;

    while (*end != '\0') {
        length++;
        end++;
    }

    end--;

    while (length > 0) {
        _putchar(*end);
        end--;
        length--;
    }

    _putchar('\n'); 
}

