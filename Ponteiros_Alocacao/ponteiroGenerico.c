#include <stdio.h>
#include <stdlib.h>

int main(){
    void *pp;
    int *p1, p2 = 10;

    p1 = &p2;
    pp = &p2;
    printf("Endereco em pp: %p \n", pp);

    pp = &p1;
    printf("Endereco em pp: %p \n", pp);

    pp = p1;
    printf("Endereco em pp: %p \n", pp);

    return 0;
}
