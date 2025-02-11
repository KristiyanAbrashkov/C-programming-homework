#include <stdio.h>

#define SIZE 5

#define PRINT(arr) \
 for (int i = 0; i < SIZE; i++) {  \
        printf("%d ", arr[i]);              \
    }                                       

int main(){
    int arr[SIZE] = {1,2,3,4,5};

    PRINT(arr);

    return 0;
}