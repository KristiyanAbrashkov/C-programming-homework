#include <stdio.h>

#define SWAP(A, B, TYPE)          \
        TYPE temp = A; \
        A = B;     \
        B = temp;  \

int main() {
    int x = 5, y = 10;

    printf("Before swap:\n");
    printf("x = %d, y = %d\n", x, y);

    SWAP(x, y, int);

    printf("After swap:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
