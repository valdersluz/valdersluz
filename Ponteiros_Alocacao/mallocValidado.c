#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *) malloc(5 * sizeof(int));
    if (p == NULL){
        printf("Erro: sem memoria!\n");
        exit(1);
    }

    int i;
    for(i=0; i<5; i++){
        printf("Digite p[%d]: \n", i);
        scanf("%d", &p[i]);
    }

    printf("\n");
    printf("----------------------------------------");
    printf("\n");

    for(i=0; i<5; i++){
        printf("p[%d]: \n", p[i]);

    }

    free(p); //sempre que alocamos memória, é necessário liberá-la quando ela não for mais utilizada
    return 0;
}
