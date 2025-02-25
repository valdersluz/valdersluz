#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int dados;
    struct Node *next;
} Node;

// Create do nó da lista

Node* createNode(int data){
    Node* novoNo = (Node*) malloc(sizeof(Node));

    if(novoNo == NULL){
        printf("Erro: Falha ao criar o novo nó.\n");
        exit(1);
    }

    novoNo->dados = data;
    novoNo->next = NULL;

    return novoNo;
}


void inserirNoComeco(Node** cabecaRef, int data){

    Node* novoNo = createNode(data); // chamando a função criar e passando parametro
    novoNo->next = *cabecaRef;

    *cabecaRef = novoNo;
}

void inserirNoFim(Node** cabecaRef, int data){
    Node* novoNo = createNode(data);

    if(*cabecaRef == NULL){
        cabecaRef = novoNo;
        return;
    }

    Node* current = *cabecaRef;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = novoNo;

}

void inserirNoMeio(Node* prevNode, int data){
    if(prevNode == NULL){
        printf("Erro: o nó anterior não pode ser nulo.\n");
        return;
    }
    Node* novoNo = createNode(data);
    novoNo->next = prevNode->next;
    prevNode->next = novoNo;

}

void imprimirLista(Node* node){
    while(node != NULL){
        printf("%d ->", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main(){
    Node* cabeca = NULL;

    /*

    inserir coisas neste meio

    */

    printf("Lista encadeada: ");
    imprimirLista(cabeca);

}
