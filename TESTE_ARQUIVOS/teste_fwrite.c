#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq;
    arq = fopen("vetor.txt", "wb");

    if(arq == NULL){
        printf("Erro na abertura\n");
        exit(1);
    }

    int total_gravado, v[5] = {1,2,3,4,5};

    total_gravado = fwrite(v, sizeof(int), 5, arq);

    if(total_gravado != 5){
        printf("Erro na leitura\n");
        exit(1);
    }

    fclose(arq);

    return 0;
}
