#include <stdio.h>
#include <stdlib.h>

int main(){
    // não está apontando pra nada, é preciso inicializar
    //int *ponteiro;
    // essa é a forma correta
    //int *ponteiro = NULL;

    int x = 10;
    int *p;

    p = &x;

    printf("x = %d\n", x);   // o que tem em x (conteudo de x)
    printf("&x = %d\n", &x); // endereço onde x está (endereço de x)
    printf("p = %d\n", p);   // o que tem em p (pra onde p aponta)
    printf("p = %d\n", *p);  // o que tem no endereço que está guardado em p

    return 0;
}
