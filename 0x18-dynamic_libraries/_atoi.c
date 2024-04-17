#include <stdio.h>

int _atoi(char *s) {
    int result = 0; // Initialize result
    int sign = 1;   // Initialize sign as positive

    // If number is negative, then update sign
    if (*s == '-') {
        sign = -1;
        s++;
    }

    for (; *s != '\0'; s++) {
        if (*s < '0' || *s > '9')
            break;

        result = result * 10 + (*s - '0');
    }

    return sign * result;
}
