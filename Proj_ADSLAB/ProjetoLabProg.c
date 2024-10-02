#include <stdio.h>
#define TAM_ALUNO 3
// protótipos das funções
int menu_geral();
int menu_aluno();

// modularização
// utilizar um gerador automático de matrícula
// inserir novos atributos na struct aluno e fazer a leitura desses atributos
// validações


typedef struct alu{
    int matricula;
    char sexo;
    int ativo;
} Aluno;

int main(void){

    Aluno listarAluno[TAM_ALUNO];
    int opcao;
    int qtdAluno = 0;
    int sair = 0;

    while(!sair){

       opcao = menu_geral();

        switch(opcao){
            case 0:{
                sair = 1;
                break;
            }
            case 1:{
                printf("Modulo Aluno\n");
                int sairAluno = 0;
                int opcaoAluno;

                while(!sairAluno){

                    opcaoAluno = menu_aluno();

                    switch(opcaoAluno){
                        case 0:{
                            sairAluno = 1;
                            printf("");
                            break;
                        }
                        case 1:{
                            printf("Cadastrar Aluno\n");

                            if (qtdAluno >= TAM_ALUNO) {
                                    printf("Lista de alunos cheia\n");
                                }else{

                                    printf("Digite a Matricula: \n");
                                    int matricula;
                                    scanf("%d", &matricula);
                                    if ( matricula < 0){
                                        printf("Matricula Invalida");
                                    }

                                    listarAluno[qtdAluno].matricula = matricula;
                                    listarAluno[qtdAluno].ativo = 1;
                                    qtdAluno++;
                                    printf("Cadastrado com Sucesso\n");
                                }


                            break;
                        }
                        case 2:{

                            printf("Listar Aluno\n");

                            if(qtdAluno == 0){
                                printf("Lista de aluno vazia\n");
                            }else{
                                for(int i = 0; i < qtdAluno; i++){
                                    if(listarAluno[i].ativo == 1)
                                    printf("Matricula: %d\n", listarAluno[i].matricula);
                                }
                            }
                            break;
                        }
                        case 3:{
                            printf("Atualizar Aluno\n");

                            printf("Digite a Matricula: \n");
                            int matricula;
                            scanf("%d", &matricula);
                            int achou = 0;
                            if ( matricula < 0){
                                printf("Matricula Invalida\n");
                            }else{
                                for(int i = 0; i < qtdAluno; i++){
                                   if (matricula == listarAluno[i].matricula && listarAluno[i].ativo) {
                                        //Atualização
                                        printf("Digite a nova matricula\n");
                                        int novaMatricula;
                                        scanf("%d", &novaMatricula);
                                        listarAluno[i].matricula = novaMatricula;
                                        achou = 1;
                                        break;
                                   }
                                }
                                if(achou){
                                    printf("Aluno atualizado com sucesso\n");
                                }else {
                                    printf("Matricula inexistente\n");
                                }
                            }

                            break;
                        }
                        case 4:{
                            printf("Excluir Aluno\n");

                            printf("Digite a Matricula: \n");
                            int matricula;
                            scanf("%d", &matricula);
                            int achou = 0;
                            if ( matricula < 0){
                                printf("Matricula Invalida");
                            }else{
                                for(int i = 0; i < qtdAluno; i++){
                                   if (matricula == listarAluno[i].matricula) {
                                        //Exclusão lógica
                                        listarAluno[i].ativo = -1;

                                        for(int j = i; j < qtdAluno - 1; j++){ //shift
                                            listarAluno[j].matricula = listarAluno[j+1].matricula;
                                            listarAluno[j].sexo = listarAluno[j+1].sexo;
                                            listarAluno[j].ativo = listarAluno[j+1].ativo;
                                        }
                                        qtdAluno--;
                                        achou = 1;
                                        break;
                                   }
                                }
                                if(achou){
                                    printf("Aluno excluido com sucesso\n");
                                }else {
                                    printf("Matricula inexistente\n");
                                }
                            }
                            break;
                        }
                        default:{
                            printf("Opcao Invalida");
                            break;
                        }
                    }
                }
                break;
            }
            case 2:{
                printf("Modulo Professor\n");
                break;
            }
            case 3:{
                printf("Modulo Disciplina");
                break;
            }
            default:{
                printf("Opcao Invalida");
            }
        }
    }

    return 0;
}

int menu_geral(){
        int opcao;

        printf("Projeto Escola\n");
        printf("0 - Sair\n");
        printf("1 - Aluno\n");
        printf("2 - Professor\n");
        printf("3 - Disciplina\n");

        scanf("%d", &opcao);

        return opcao;
}


int menu_aluno(){
    int opcao;

    printf("0 - Voltar\n");
    printf("1 - Cadastrar Aluno\n");
    printf("2 - Listar Aluno\n");
    printf("3 - Atualizar Aluno\n");
    printf("4 - Excluir Aluno\n");

    scanf("%d", &opcao);

    return opcao;
}




