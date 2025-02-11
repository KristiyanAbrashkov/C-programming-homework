#include <stdio.h>

int nok(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int a = 12, b = 18;
    int result = nok(a, b);
    
    printf("NOK na %d i %d e: %d\n", a, b, result);
    return 0;
}
