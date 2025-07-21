#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int conteudo;
    struct Node *prox;
}Node;

Node* criar_node(int valor){
    Node *novo = (Node*)malloc(sizeof(node));
    novo->conteudo = valor;
    novo->prox = NULL;
    return 0;
}

void inserir_inicio(Node **inicio, int valor){
    Node *novo = criar_node(valor);
    novo->prox = *inicio;
    *inicio = novo;
}

int main(){

    return 0;
}
