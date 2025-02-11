#include "safeint.h"
#include "util.h"
#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        handle_argument_error();
        return 1;
    }

    int num1 = parse_input(argv[1]);
    int num2 = parse_input(argv[2]);

    if (num1 == INT_MAX + 1 || num2 == INT_MAX + 1) {
        handle_argument_error();
        return 1;
    }

    SafeResult result = safedivide(num1, num2);

    if (result.errorflag) {
        handle_overflow_error();
        return 1;
    }

    printf("%d\n", result.value);
    return 0;
}
