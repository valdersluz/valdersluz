#include <stdio.h>
#include <ctype.h>

int main(){
    char caracter;
    printf("digite caracter: \n");
    scanf("%c", &caracter);

    if(caracter == 'a' || caracter =='e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
        printf("vogal");
    }else if ( caracter >= 'b' && caracter <= 'd' || caracter >= 'f' && caracter <= 'h' || caracter >= 'j' && caracter <= 'n' || caracter >= 'p' && caracter <= 't' || caracter >= 'v' && caracter <= 'z'){
        printf("consoante");
    }else if(isdigit(caracter) ){
        printf("Numero");
    }else {
        printf("Caractere especial");
    }
    return 0;
}
