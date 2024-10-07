#include <stdio.h>
#define TAM_ALUNO 3

#define CAD_ALUNO_SUCESSO -1
#define MATRICULA_INVALIDA -2
#define LISTA_CHEIA -3
#define ATUALIZACAO_ALUNO_SUCESSO -4
#define MATRICULA_INEXISTENTE -5
#define EXCLUSAO_ALUNO_SUCESSO -6

typedef struct alu{
    int matricula;
    char sexo;
    int ativo;
} Aluno;

// protótipos das funções
int menu_geral();
int menu_aluno();
int cadastrar_aluno(Aluno listarAluno[], int qtdAluno);
void listar_aluno(Aluno listarAluno[], int qtdAluno);
int atualizar_aluno(Aluno listarAluno[], int qtdAluno);
int excluir_aluno(Aluno listarAluno[], int qtdAluno);
// modularização
// utilizar um gerador automático de matrícula
// inserir novos atributos na struct aluno e fazer a leitura desses atributos
// validações




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
                            break;
                        }
                        case 1:{

                            int retorno = cadastrar_aluno(listarAluno, qtdAluno);

                            if(retorno == LISTA_CHEIA){
                                printf("Lista de alunos cheia\n");
                            }else if(retorno == MATRICULA_INVALIDA){
                                printf("Matricula Invalida\n");
                            }else{
                                printf("Cadastrado com Sucesso\n");
                                qtdAluno++;
                            }

                            break;
                        }
                        case 2:{

                            listar_aluno(listarAluno, qtdAluno);
                            break;

                        }
                        case 3:{

                            int retorno = atualizar_aluno(listarAluno, qtdAluno);

                            switch(retorno){
                                case MATRICULA_INVALIDA:{
                                    printf("Matricula invalida\n");
                                    break;
                                }
                                case MATRICULA_INEXISTENTE:{
                                    printf("Matricula Inexistente\n");
                                    break;
                                }
                                case ATUALIZACAO_ALUNO_SUCESSO:{
                                    printf("Aluno atualizado com sucesso\n");
                                    break;
                                }
                            }

                            break;
                        }
                        case 4:{

                            int retorno = excluir_aluno(listarAluno, qtdAluno);

                            switch(retorno){
                                case MATRICULA_INVALIDA: {
                                    printf("Matricula invalida\n");
                                    break;
                                }
                                case MATRICULA_INEXISTENTE: {
                                    printf("Matricula inexistente\n");
                                    break;
                                }
                                case EXCLUSAO_ALUNO_SUCESSO: {
                                    printf("Aluno excluido com sucesso\n");
                                    qtdAluno--;
                                    break;
                                }
                            }




                            break;
                        }
                        default:{
                            printf("Opcao Invalida\n");
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
                printf("Modulo Disciplina\n");
                break;
            }
            default:{
                printf("Opcao Invalida\n");
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


int cadastrar_aluno(Aluno listarAluno[], int qtdAluno){
    printf("Cadastrar Aluno\n");

    if (qtdAluno >= TAM_ALUNO) {
          return LISTA_CHEIA;
    }else{

        printf("Digite a Matricula: \n");
        int matricula;
        scanf("%d", &matricula);
        if ( matricula < 0){
            return MATRICULA_INVALIDA;
        }

        listarAluno[qtdAluno].matricula = matricula;
        listarAluno[qtdAluno].ativo = 1;

        return CAD_ALUNO_SUCESSO;
    }

}

void listar_aluno(Aluno listarAluno[], int qtdAluno){

    printf("Listar Aluno\n");

    if(qtdAluno == 0){
        printf("Lista de aluno vazia\n");
    }else{
        for(int i = 0; i < qtdAluno; i++){
            if(listarAluno[i].ativo == 1)
            printf("Matricula: %d\n", listarAluno[i].matricula);
        }
    }
}

int atualizar_aluno(Aluno listarAluno[], int qtdAluno){

    printf("Atualizar Aluno\n");

    printf("Digite a Matricula: \n");
    int matricula;
    scanf("%d", &matricula);
    int achou = 0;
    if ( matricula < 0){
        return MATRICULA_INVALIDA;
    }else{
        for(int i = 0; i < qtdAluno; i++){
           if (matricula == listarAluno[i].matricula && listarAluno[i].ativo) {
                //Atualização
                printf("Digite a nova matricula\n");
                int novaMatricula;
                scanf("%d", &novaMatricula);
                if(matricula < 0){
                    return MATRICULA_INVALIDA;
                }
                listarAluno[i].matricula = novaMatricula;
                achou = 1;
                break;
           }
        }
        if(achou){
            return ATUALIZACAO_ALUNO_SUCESSO;
        }else {
            return MATRICULA_INEXISTENTE;
        }
    }
}

int excluir_aluno(Aluno listarAluno[], int qtdAluno){
    printf("Excluir Aluno\n");

    printf("Digite a Matricula: \n");
    int matricula;
    scanf("%d", &matricula);
    int achou = 0;
    if ( matricula < 0){
        return MATRICULA_INVALIDA;
    }else{
        for(int i = 0; i < qtdAluno; i++){
            if (matricula == listarAluno[i].matricula) {
                // Exclusão lógica
                listarAluno[i].ativo = -1;

                for(int j = i; j < qtdAluno - 1; j++){ //shift
                    listarAluno[j].matricula = listarAluno[j+1].matricula;
                    listarAluno[j].sexo = listarAluno[j+1].sexo;
                    listarAluno[j].ativo = listarAluno[j+1].ativo;
                }
                achou = 1;
                break;
            }
        }

        if(achou){
            return EXCLUSAO_ALUNO_SUCESSO;
        }else {
            return MATRICULA_INEXISTENTE;
        }

    }
}



