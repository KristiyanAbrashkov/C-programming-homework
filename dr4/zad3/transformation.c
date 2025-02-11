#include <stdio.h>
#include <string.h>
#include "transformation.h"

transformation string_to_long(char input[100]) {
    transformation result;
    result.result = 0;
    result.error[0] = '\0';

    if (strlen(input) == 0) {
        strcpy(result.error, "Input string is empty");
        return result;
    }

    int negative = 0;
    int i = 0;

    if (input[0] == '-') {
        negative = 1;
        i++;
    } else if (input[0] == '+') {
        i++;
    }

    for (; i < strlen(input); i++) {
        if (input[i] < '0' || input[i] > '9') {
            strcpy(result.error, "Invalid input string");
            return result;
        }

        result.result = result.result * 10 + (input[i] - '0');
    }

    if (negative) {
        result.result = -result.result;
    }

    return result;
}

