#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int campo_form;
    struct No *prox;
}No;

No* createNo(int dados){
    No* novoNo = (No*)malloc(sizeof(No));

    if(novoNo == NULL){
        printf("Erro! Nao foi possivel criar o No");
        exit(1);
    }

    novoNo->campo_form = dados;
    novoNo->prox = NULL;

    return novoNo;
}

void imprimirConteudoLista(No* noPonteiro){

    while(noPonteiro != NULL){
        printf("%d ->", noPonteiro->campo_form);
        noPonteiro = noPonteiro->prox;
    }

    printf("NULL\n");

}

int main(){

    return 0;
}
