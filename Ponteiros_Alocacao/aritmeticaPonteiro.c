#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, *p1, x = 10;
    float *f, y = 20.0;
    p = &x;
    printf("*p: %d \n", *p);
    p1 = p;
    printf("*p1: %d \n", *p1);
    f = &y;
    printf("*f: %.2f \n", *f);
    return 0;
}
