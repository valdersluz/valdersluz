#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *p1, *p2;

    p1 = fopen("minusculo.txt", "r");
    p2 = fopen("maiusculo.txt", "w");

    if((p1 == NULL) || (p2 == NULL)){
        printf("Erro na abertura\n");
        exit(1);
    }

    char c = fgetc(p1);

    while(c != EOF){
        fputc(toupper(c), p2);
        c = fgetc(p1);
    }

    fclose(p1);
    fclose(p2);

    return 0;
}
