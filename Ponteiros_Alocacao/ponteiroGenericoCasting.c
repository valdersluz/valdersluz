#include <stdio.h>
#include <stdlib.h>

int main(){
    void *pp;
    int p2 = 10;

    pp = &p2;
    printf("Conteudo: %p \n", *pp); // ERRO

    pp = &p1;
    printf("Conteudo: %p \n", *(int*)pp); // CORRETO

    return 0;
}
