#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    #if defined ARRAY_SIZE && ARRAY_SIZE > 0 && ARRAY_SIZE < 11
        int arr[ARRAY_SIZE];
        
        int value = 1;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            arr[i] = value;
            value *= 2;
        }
        
        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("%d\n", arr[i]);
        }
    #else
        printf("Array size not added\n");
    #endif

    return 0;
}
