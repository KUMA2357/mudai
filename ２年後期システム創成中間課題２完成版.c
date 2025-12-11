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
        printf("NG\n");
        
        if (strlen(p) < 8) {
            printf("Must be at least 8 characters\n");
    }
        if (!Upper) {
            printf("Please include uppercase letters\n");
    }
        if (!Lower) {
            printf("Please include lowercase letters\n");
    }
    }

    return 0;
}