#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int conteudo;
    struct celula *ponteiro;
}Lista;// <-- o tipo

void imprime(Lista *le){

    Lista *p;

    for(p = le; p != NULL; p = p->ponteiro){
        printf("%d\n", p->conteudo);
    }
}

int main(){
    //printf("sizeof (celula) = %d\n", sizeof(Lista)); // tamanho do tipo

    Lista *umaLista = NULL;

    imprime(umaLista);

    return EXIT_SUCCESS;
}
