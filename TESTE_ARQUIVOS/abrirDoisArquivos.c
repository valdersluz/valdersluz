#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *p1, *p2;

    p1 = fopen("minusculo.txt", "r");
    p2 = fopen("maiusculo.txt", "w");

    if((p1 == NULL) || (p2 == NULL)){
        printf("Erro na abertura\n");
        exit(1);
    }



    return 0;
}
