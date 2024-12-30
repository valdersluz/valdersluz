#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    int qual;
    char quer;
}Ponto;

int main(){
    Ponto ponto;
    printf("char neste processador eh: %d\n", sizeof(char));
    printf("inteiro neste processador eh: %d\n", sizeof(int));
    printf("float neste processador eh: %d\n", sizeof(float));
    printf("double neste processador eh: %d\n", sizeof(double));
    printf("struct neste processador eh: %d\n", sizeof(Ponto));
    printf("o campo da struct neste processador eh: %d\n", sizeof(ponto.qual));

    return 0;
}
