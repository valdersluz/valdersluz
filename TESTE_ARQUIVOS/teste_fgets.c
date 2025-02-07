#include <stdio.h>
#include <stdlib.h>
#define TAM 40

int main(){
    char str[TAM];
    FILE *arq;
    arq = fopen("arquivoteste.txt", "r");

    if(arq == NULL){
        printf("Erro na abertura\n");
        exit(1);
    }

    //fgets() lê até o \n ou o '\0'

    char *result = fgets(str, TAM, arq);
    if(result == NULL)
        printf("Erro na leitura\n");
    else
        printf("%s\n", str);

    fclose(arq);

    return 0;
}
