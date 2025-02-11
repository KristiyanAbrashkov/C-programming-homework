#include "mystrings.h"

int strlength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void strconcat(char str1[], char str2[], int max_size) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0' && i + j < max_size - 1) {
        str1[i + j] = str2[j];
        j++;
    }

    str1[i + j] = '\0';
}

int strcompare(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}
