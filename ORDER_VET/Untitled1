/*
    Gerar um algoritmo de ordenamento de um vetor
*/

#include <stdio.h>

int main(){
    int aux, vet[7];

    printf("Preencha o vetor: ");

    for(int i=0; i<7; i++){
        scanf("%d", &vet[i]);
    }

    printf("O vetor eh: \n");
    for(int i=0; i<7; i++){
        printf("%d, ", vet[i]);
    }

    for(int i=0;i<7;i++){
        for(int j=1; j<7;j++){
            if(vet[i]>vet[j]){
                aux=vet[j];
                vet[j]=vet[i];
                vet[i]=aux;
            }
        }
    }

    printf("\nE o vetor agora eh: \n");
    for(int i=0; i<7; i++){
        printf("%d, ", vet[i]);
    }
}
