#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct _node {

    int val;
    struct _node *prev;
    struct _node *next;

} Node;

typedef struct _pilha {

    Node *begin;
    Node *end;
    int tamanho;

} Pilha;

Node *Node_create(int val) {
    Node *node = (Node*) calloc(1, sizeof(Node));
    node->val = val;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

Pilha *Pilha_create() {

    Pilha *P = (Pilha *) calloc(1, sizeof(Pilha));
    P->begin = NULL;
    P->end = NULL;
    P->tamanho = 0;
    return P;
}

void Pilha_push(Pilha *P, int val) {

    Node *n = Node_create(val);

    if (P->begin == NULL){   //se a lista esta vazia
        P->begin = n;
        P->end = n;
    } else {
        P->end->next = n;
        n->prev = P->end;
        P->end = n;
    }

    P->tamanho++;
}

void Pilha_pop(Pilha *P){

    Node *n = NULL;

    if(P->tamanho == 0){
        printf("\nPilha vazia\n");
        return;
    }else if(P->tamanho == 1){
        n = P->begin;
        P->begin = NULL;
        P->end = NULL;
        free(n);
    }else{
        n = P->end;
        n->prev->next = NULL;
        P->end = n->prev;
        free(n);
    }

    P->tamanho--;
}

int Pilha_peek(Pilha *P){
    return P->end->val;
}

//funções úteis

int Pilha_numero_elem(Pilha *P){
    return (P->tamanho);
}

int Pilha_prim(Pilha *P){
    if(P->begin == NULL){
        return -1;
    }

    return P->begin->val;
}

int Pilha_ult(Pilha *P){
    if(P->end == NULL){
        return -1;
    }

    return P->end->val;
}

void Pilha_print(Pilha *P) {
    Node *n = P->end;
    printf("Topo da pilha: \n");

    while (n != NULL) {
        printf(" - %d \n", n->val);
        n = n->prev;
    }
    printf("Comeco da pilha  \n\n");
    printf("Quantidade de nos na pilha: %d\n", Pilha_numero_elem(P));
}

int main (){


Pilha *pilha1 = Pilha_create();

Pilha_push(pilha1, 1);
Pilha_push(pilha1, 2);
Pilha_push(pilha1, 3);
Pilha_push(pilha1, 4);
Pilha_push(pilha1, 5);
Pilha_pop(pilha1);
Pilha_push(pilha1, 1);
Pilha_push(pilha1, 2);
Pilha_push(pilha1, 3);
Pilha_pop(pilha1);
Pilha_push(pilha1, 4);
Pilha_push(pilha1, 5);
Pilha_pop(pilha1);

Pilha_print(pilha1);

printf("\nElemento do topo: %d", Pilha_peek(pilha1));

return (0);
}
