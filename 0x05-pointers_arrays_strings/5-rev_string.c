#include <stdio.h>

void rev_string(char *s) {
    int length = 0;
    char *end = s;

    while (*end != '\0') {
        length++;
        end++;
    }

    end --;
    while (s < end) {
        char temp = *s;
        *s = *end;
        *end = temp;
        s++;
        end--;
    }
}

