#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int conteudo;
    struct celula *ponteiro;
}Lista;// <-- o tipo


Lista* inserir_inicio(Lista *head, int valor){

    Lista *nova = (Lista*)malloc(sizeof(Lista));

    if(nova == NULL){
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    nova->conteudo = valor;
    nova->ponteiro = head;

    return nova;
}

void imprime(Lista *le){

    Lista *p;

    for(p = le; p != NULL; p = p->ponteiro){
        printf("%d\n", p->conteudo);
    }
}

int main(){
    //printf("sizeof (celula) = %d\n", sizeof(Lista)); // tamanho do tipo

    Lista *umaLista = NULL;

    umaLista = inserir_inicio(umaLista, 120);
    umaLista = inserir_inicio(umaLista, 220);
    umaLista = inserir_inicio(umaLista, 320);
    umaLista = inserir_inicio(umaLista, 420);
    umaLista = inserir_inicio(umaLista, 520);
    umaLista = inserir_inicio(umaLista, 620);

    imprime(umaLista);
    free(umaLista);
    return EXIT_SUCCESS;
}
