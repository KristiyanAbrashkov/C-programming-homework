#include <stdio.h>
#include "quadraticroots.h"

int main() {
    QuadraticRootsResult result;

    printf("Example with int:\n");
    result = findroots(1, -3, 2);
    if (result.norealroots) {
        printf("No real roots.\n");
    } else {
        printf("Roots: x1 = %.2Lf, x2 = %.2Lf\n", result.x1, result.x2);
    }

    printf("\nExample with float:\n");
    result = findroots(1.0f, -4.5f, 4.0f);
    if (result.norealroots) {
        printf("No real roots.\n");
    } else {
        printf("Roots: x1 = %.2Lf, x2 = %.2Lf\n", result.x1, result.x2);
    }

    printf("\nExample with double:\n");
    result = findroots(1.0, 2.0, 5.0);
    if (result.norealroots) {
        printf("No real roots.\n");
    } else {
        printf("Roots: x1 = %.2Lf, x2 = %.2Lf\n", result.x1, result.x2);
    }

    return 0;
}