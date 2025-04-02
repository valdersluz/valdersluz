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

    if(noPonteiro == NULL){
        printf("Lista Vazia.\n");
        return;
    }
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

void inserirInicio(No** headEndereco, int data){
    No* novoNo = createNo(data); //cria um ponteiro do tipo No* e chama a função criar

    novoNo->prox = *headEndereco;
    *headEndereco = novoNo;
}

void inserirFimLista(){


}


int main(){
    No* primeiroNoIniciado = NULL;
    int escolha;
    int num;

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
                printf("Opcao 1: Inserir no inicio\n");
                printf("\n");
                printf("Qual o valor? ");
                scanf("%d", &num);

                inserirInicio(&primeiroNoIniciado, num);
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
                liberarLista(primeiroNoIniciado);
                primeiroNoIniciado = NULL;
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
