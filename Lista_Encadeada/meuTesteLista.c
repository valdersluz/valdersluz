#include <stdio.h>
#include <stdlib.h>

typedef struct No{
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

void liberarLista(No* noPonteiro){
    No *pAuxiliar;

    while (noPonteiro != NULL){
        pAuxiliar = noPonteiro;
        noPonteiro = noPonteiro->prox;
        free(pAuxiliar);
    }


}




int main(){
    No* primeiroNoIniciado = NULL;
    int escolha;

    for( ; ; ){
        printf("Qual a sua escolha? \n");
        printf("1 - Inserir no inicio.\n");
        printf("2 - Inserir no meio.\n");
        printf("3 - Inserir no fim.\n");
        printf("4 - Esvaziar lista\n");
        printf("5 - Sair.\n");

        scanf("%d", &escolha);

        switch(escolha){
            case 1 :
                printf("opcao 1\n");
                imprimirConteudoLista(primeiroNoIniciado);
                break;

            case 2 :
                printf("opcao 2\n");
                imprimirConteudoLista(primeiroNoIniciado);
                break;

            case 3 :
                printf("opcao 3\n");
                imprimirConteudoLista(primeiroNoIniciado);
                break;

            case 4 :
                printf("opcao 4\n");
                imprimirConteudoLista(primeiroNoIniciado);
                break;
            case 5 :
                printf("opcao 5\n");
                exit(0);

            default :
               printf("opcao invalida!\n");
               break;
        }
    }

    return 0;
}
