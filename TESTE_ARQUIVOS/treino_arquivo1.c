#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ponteiro;
    ponteiro  = fopen("arquivoteste.txt", "w");
    if(ponteiro == NULL){
        printf("Erro na abertura");
        exit(1);
    }

    char texto[60] = "Meu programa em C que eu estou testando a leitura";

    for(int i = 0; i<strlen(texto); i++){
        fputc(texto[i], ponteiro);
    }

    fclose(ponteiro);

    return 0;
}
