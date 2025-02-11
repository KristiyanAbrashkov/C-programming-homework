#include "util.h"
#include <stdio.h>
#include <limits.h>

void handle_argument_error() {
    printf("Error: Argument exceeds valid range for integers.\n");
}

void handle_overflow_error() {
    printf("Error: Overflow or underflow occurred during the operation.\n");
}

int parse_input(char input[]) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (input[0] == '-') {
        sign = -1;
        i = 1;
    }

    for (; input[i] != '\0'; i++) {
        if (input[i] < '0' || input[i] > '9') return INT_MAX + 1;

        if (result > (INT_MAX - (input[i] - '0')) / 10) return INT_MAX + 1;

        result = result * 10 + (input[i] - '0');
    }

    return result * sign;
}
