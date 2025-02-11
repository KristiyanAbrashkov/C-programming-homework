#include <stdio.h>
#include <string.h>
#include "transformation.h"

int main() {
    char examples[5][100] = {"123", "-456", "12ab34", "", "78"};
    int count = 5;

    for (int i = 0; i < count; i++) {
        char input[100];
        strcpy(input, examples[i]);
        transformation result = string_to_long(input);

        printf("Input: %s\n", input);
        if (result.error[0] != '\0') {
            printf("Error: %s\n", result.error);
        } else {
            printf("Result: %ld\n", result.result);
        }
        printf("\n");
    }

    return 0;
}
