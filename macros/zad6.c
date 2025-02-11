#include <stdio.h>

#define SWAP(A, B, TYPE) \
        TYPE temp = A;   \
        A = B;           \
        B = temp;        \

#define SORT(ARRAY, SIZE, TYPE, COMPARE)           \
        for (int i = 0; i < SIZE ; i++) {       \
            for (int j = i + 1; j < SIZE; j++) {   \
                if (ARRAY[i] COMPARE ARRAY[j]) {   \
                    SWAP(ARRAY[i], ARRAY[j], TYPE);\
                }                                  \
            }                                      \
        }                                          

int main() {
    int array[] = {5, 3, 8, 1, 4};
    int size = 5;

    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, >);

    printf("After sorting in ascending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, <);

    printf("After sorting in descending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
