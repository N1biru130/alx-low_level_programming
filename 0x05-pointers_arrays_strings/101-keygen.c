#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

void generate_password(char *password, int length) {
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";
    srand((unsigned int)time(NULL));
    int i;
    for (i = 0; i < length; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[length] = '\0';
}

int main() {
    char password[PASSWORD_LENGTH + 1];
    generate_password(password, PASSWORD_LENGTH);
    printf("Random password: %s\n", password);
    return 0;
}

