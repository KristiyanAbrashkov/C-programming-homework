#include <stdio.h>

#define PRINT(X) printf("File: %s\nLine: %d\n" #X " = %d\n", __FILE__, __LINE__, X)

int main() {
    int x = 25;
    PRINT(x); 

    return 0;
}
