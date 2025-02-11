#include <stdio.h>
#include <math.h>

void power_four(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (long)pow(arr[i], 4);
    }
}

int main() {
    long numbers[] = { 2, 3, 4, 5 };
    int size = 4;

    power_four(numbers, size);

    printf("Array elements raised to the fourth power:\n");
    for (int i = 0; i < size; i++) {
        printf("%ld ", numbers[i]);
    }
    printf("\n");

    return 0;
}
