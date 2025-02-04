#include <stdio.h>
#include <stdlib.h>

int main(){
    //Forma geral
    //FILE *fopen(char *nome, char *mododeleitura);

    // - absoluto (endereço completo)
    // - relativo (relativo a pasta do programa)
    FILE *fponteiro;

    //caminho absoluto: ta no linux
    fponteiro = fopen("/home/valder/Downloads/CursoADS/trabalhoLabProg/valdersluz/TESTE_ARQUIVOS/arquivo.txt", "w");

    //caminho relativo: só funciona de o arquivo estiver no mesmo
    //diretório do programa a ser executado
    fponteiro = fopen("arquivo.txt", "w");

    //caminho relativo com maneira diferente de navegar
    fponteiro = fopen("..\\TESTE_ARQUIVOS\\arquivo.txt", "w");

    if(fponteiro == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }

    /*Sempre que terminamos de usar um arquivo
    devemos fechá-lo. Para realizar essa tarefa,
    usa-se a função fclose() */

    //Forma geral:
    int fclose (FILE *fponteiro);
    /* fclose() retorna ZERO no caso de sucesso
    no fechamento do arquivo*/

    //fechar o arquivo
    fclose(fponteiro);



    return 0;
}
