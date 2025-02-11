#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <stdio.h>

typedef struct {
    long result;
    char error[100];
} transformation;

transformation string_to_long(char input[100]);

#endif 
