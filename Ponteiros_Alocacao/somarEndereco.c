#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = 0x5DC; //1500
    char *c = 0x5DC; //1500

    printf("p: %d \nc = %d\n", p, c);
    p++; //1504
    c++; //1501
    printf("p: %d \nc = %d\n", p, c);

    return 0;
}
