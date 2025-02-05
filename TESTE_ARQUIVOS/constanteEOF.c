#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    End Of File
    Ao manipular dados binários, o valor da constante EOF pode ser igual
    ao valor da constante EOF e pode ser lido. Essa constante é boa pra
    ser usada com fgetc(), fputc()...

    Pra evitar isso, usamos a função feof(), que retorna zero quando o último
    caractere do arquivo é lido.

    forma geral:
    int feof(FILE *ponteiro);
    */

    int main(){
    FILE *ponteiro;
    ponteiro  = fopen("arquivoteste.txt", "r");
    if(ponteiro == NULL){
        printf("Erro na abertura");
        exit(1);
    }

    char c = fgetc(ponteiro);

    while(!feof(ponteiro)){ //a diferença ta nessa linha
        printf("%c", c);
        c = fgetc(ponteiro); // file get char
    }

    printf("\nFim\n");

    fclose(ponteiro);
    return 0;
}
