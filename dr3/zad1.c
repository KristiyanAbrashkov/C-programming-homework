#include <stdio.h>

#define DEBUG

void sortArray(int arr[], int size) {
    for (int i = 0; i < size ; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sum(int arr[], int size) {
    int sum = 0;

#ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nElements at indexes divisible by 3: ");
#endif

    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
#ifdef DEBUG
            printf("%d ", arr[i]);
#endif
        }
    }

    printf("\nSum of elements at indexes divisible by 3: %d\n", sum);
}

int main() {
    int arr[] = {5, 1, 9, 3, 8, 4, 7, 2, 6, 0};
    int size = 10;

    sortArray(arr, size);
    sum(arr, size);

    return 0;
}
