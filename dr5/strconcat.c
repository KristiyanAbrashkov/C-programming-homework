#include <stdio.h>
#include <string.h>
#include "mystrings.h"

#define MAX_SIZE 51

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./strconcat.exe <string1> <string2>\n");
        return 1;
    }

    if (strlength(argv[1]) > MAX_SIZE - 1 || strlength(argv[2]) > MAX_SIZE - 1) {
        printf("Error: Each string must not exceed 50 characters.\n");
        return 1;
    }

    char str1[MAX_SIZE];
    int i = 0;
    while (argv[1][i] != '\0' && i < MAX_SIZE - 1) {
        str1[i] = argv[1][i];
        i++;
    }
    str1[i] = '\0';

    strconcat(str1, argv[2], MAX_SIZE);
    printf("%s\n", str1);
    return 0;
}
