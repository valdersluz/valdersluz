#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ponteiro;
    ponteiro  = fopen("arquivoteste.txt", "r");
    if(ponteiro == NULL){
        printf("Erro na abertura");
        exit(1);
    }

    char c = fgetc(ponteiro);

    /*
    for(int i = 1; i<=17; i++){
        c = fgetc(ponteiro); // file get char
        printf("%c", c);
    }
    */

    while(c != EOF){
        printf("%c", c);
        c = fgetc(ponteiro); // file get char
    }

    printf("\nFim\n");

    fclose(ponteiro);

    return 0;
}
