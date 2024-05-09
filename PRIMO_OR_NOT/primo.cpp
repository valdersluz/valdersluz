/*
    Este programa é para saber se um numero digitado pelo
    usuário é primo. Neste caso é feito uma divisão por 2
    e então faz divisões sucessivas até esta metade no número
    digitado. No fim, se verifica se houve alguma divisão com
    módulo restando 0.
    Se começa de dois porque não há necessidade de dividir por
    um ou zero por causa da definição de primos.

*/
#include <stdio.h>

int main(){
    float div, result;
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    div = (float)num / 2;
    int prime = 1;

    for (int i = 2; i <= div; i++){
        result = num % i;

        if( result == 0){
            prime = 0;
            break;
        }
    }

    if(prime == 1){
        printf("%d eh primo\n", num);
    }else {
        printf("%d nao eh primo\n", num);
    }

    return 0;
}
