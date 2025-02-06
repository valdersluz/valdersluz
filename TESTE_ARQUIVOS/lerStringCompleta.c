#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *ponteiro;
    ponteiro = fopen("texto.txt", "w");
    if(ponteiro == NULL){
        printf("erro na abertura\n");
        exit(1);
    }

    fputs("escrevendo algo", ponteiro);
    fputc('\n', ponteiro);
    fputs("vindo pra outra linha", ponteiro);
    fclose(ponteiro);

    return 0;

}
