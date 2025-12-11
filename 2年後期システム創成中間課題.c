#include <stdio.h>
#include <string.h>

int main() {
    char p[100];
    int Upper = 0;
    int Lower = 0;
    int i;

    printf("Please enter your possword: ");
    scanf("%99s", p);

    for (i = 0; i < strlen(p); i++) {
        if (p[i] >= 'A' && p[i] <= 'Z') {
            Upper = 1;
        }
        if (p[i] >= 'a' && p[i] <= 'z') {
            Lower = 1;
        }
    }

    if (strlen(p) >= 8 && Upper && Lower) {
        printf("OK\n");
    } else {
        printf("This password may not be at least 8 characters long or contain both uppercase and lowercase letters.\n");
    }

    return 0;
}