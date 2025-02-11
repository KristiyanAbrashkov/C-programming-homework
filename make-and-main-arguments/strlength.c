#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./strlength.exe <string>\n");
        return 1;
    }
    printf("%d\n", strlength(argv[1]));
    return 0;
}
