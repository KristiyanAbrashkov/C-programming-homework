#include <stdio.h>
#include <limits.h>

int main() {
    printf("%-15s|%-15s|%-10s|%-15s|%-15s|%-15s|%-15s\n", 
        "Type", "Format", "Bytes", "Min Signed", "Max Signed", "Format Unsigned", "Max Unsigned");

    printf("%-15s|%-15s|%-10lu|%-15d|%-15d|%-15s|%-15u\n",
        "short", "%hd", sizeof(short), SHRT_MIN, SHRT_MAX, "%hu", USHRT_MAX);

    printf("%-15s|%-15s|%-10lu|%-15d|%-15d|%-15s|%-15u\n",
        "int", "%d", sizeof(int), INT_MIN, INT_MAX, "%u", UINT_MAX);

    printf("%-15s|%-15s|%-10lu|%-15ld|%-15ld|%-15s|%-15lu\n",
        "long", "%ld", sizeof(long), LONG_MIN, LONG_MAX, "%lu", ULONG_MAX);

    printf("%-15s|%-15s|%-10lu|%-15lld|%-15lld|%-15s|%-15llu\n",
        "long long", "%lld", sizeof(long long), LLONG_MIN, LLONG_MAX, "%llu", ULLONG_MAX);

    return 0;
}
