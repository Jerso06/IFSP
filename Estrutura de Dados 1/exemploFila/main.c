#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct _node {

    int val;
    struct _node *prev;
    struct _node *next;

} Node;

typedef struct _fila {

    Node *begin;
    Node *end;
    int tamanho;

} Fila;

Node *Node_create(int val) {
    Node *node = (Node*) calloc(1, sizeof(Node));
    node->val = val;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

Fila *Fila_create() {

    Fila *F = (Fila *) calloc(1, sizeof(Fila));
    F->begin = NULL;
    F->end = NULL;
    F->tamanho = 0;
    return F;
}

void Fila_enqueue(Fila *F, int val) {

    Node *n = Node_create(val);

    if (F->begin == NULL){   //se a lista esta vazia
        F->begin = n;
        F->end = n;
    } else {
        F->end->next = n;
        n->prev = F->end;
        F->end = n;
    }

    F->tamanho++;
}

void Fila_dequeue(Fila *F){

    Node *n = NULL;

    if(F->tamanho == 0){
        printf("\nPilha vazia\n");
        return;
    }else if(F->tamanho == 1){
        n = F->begin;
        F->begin = NULL;
        F->end = NULL;
        free(n);
    }else{
        n = F->begin;
        n->next->prev = NULL;
        F->begin = n->next;
        free(n);
    }

    F->tamanho--;
}

int Fila_peek(Fila *F){
    return F->begin->val;
}

//fun��es �teis

int Fila_numero_elem(Fila *F){
    return (F->tamanho);
}

int Fila_prim(Fila *F){
    if(F->begin == NULL){
        return -1;
    }

    return F->begin->val;
}

int Fila_ult(Fila *F){
    if(F->end == NULL){
        return -1;
    }

    return F->end->val;
}

void Fila_print(Fila *F) {
    Node *n = F->begin;
    printf("Inicio da fila: ->");

    while (n != NULL) {
        printf(" %d ->", n->val);
        n = n->next;
    }
    printf("Fim da fila\n\n");
    printf("Quantidade de nos na fila: %d\n", Fila_numero_elem(F));
}

int main (){

Fila *fila1 = Fila_create();

Fila_enqueue(fila1, 1);
Fila_enqueue(fila1, 2);
Fila_enqueue(fila1, 3);
Fila_enqueue(fila1, 4);
Fila_enqueue(fila1, 5);

Fila_dequeue(fila1);
Fila_dequeue(fila1);

Fila_enqueue(fila1, 6);
Fila_enqueue(fila1, 7);

Fila_print(fila1);

printf("\nElemento do inicio da fila: %d\n", Fila_peek(fila1));

return (0);
}
