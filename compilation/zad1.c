#include <stdio.h>

#define AB(A,B) (A+B)*(A+B)

int main(){
    int a = 1;
    int b = 3;
    
    printf("something = %d",AB(a,b));

    return 0;
}