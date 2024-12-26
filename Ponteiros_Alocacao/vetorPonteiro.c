#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5] = {1,2,3,4,5};
    int *p = vet;

    for (int i = 0; i < 5; i++){
        printf("conteudo: [%d]\n", *(p+i)); // soma o endereço e acessa o conteudo
    }

    for (int i = 0; i < 5; i++){
        printf("notacao vetor: [%d]\n", &p[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("conteudo sem *: [%d]\n", p+i);
    }


    return 0;
}
