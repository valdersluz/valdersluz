#include <stdio.h>
#include <string.h>

int main(){
    char nome[21];
    int i;

    scanf("%s", nome);
    //getchar();

    //for(i=0;i<strlen(nome);i++){
    //    scanf("%S", nome[i]);
    //}
    //printf("%s", nome);

    for(i=0;i<strlen(nome);i++){
        printf("%c", nome[i]);
    }
    return 0;
}
