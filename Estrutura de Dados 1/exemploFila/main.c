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


//funcoes pilha
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

int Pilha_pop(Pilha *P){

    Node *n = NULL;
    int valorSalvo = 0;

    if(P->tamanho == 0){
        printf("\nPilha vazia\n");
        return valorSalvo;
    }else if(P->tamanho == 1){
        n = P->begin;
        valorSalvo = n->val;
        P->begin = NULL;
        P->end = NULL;
        free(n);
    }else{
        n = P->end;
        valorSalvo = n->val;
        n->prev->next = NULL;
        P->end = n->prev;
        free(n);
    }

    P->tamanho--;
    return valorSalvo;
}

int Pilha_peek(Pilha *P){
    return P->end->val;
}

//funcoes fila
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

int Fila_dequeue(Fila *F){

    Node *n = NULL;
    int valorSalvo = 0;

    if(F->tamanho == 0){
        printf("\nPilha vazia\n");
        return valorSalvo;
    }else if(F->tamanho == 1){
        n = F->begin;
        valorSalvo = n->val;
        F->begin = NULL;
        F->end = NULL;
        free(n);
    }else{
        n = F->begin;
        valorSalvo = n->val;
        n->next->prev = NULL;
        F->begin = n->next;
        free(n);
    }

    F->tamanho--;
    return valorSalvo;
}

int Fila_peek(Fila *F){
    return F->begin->val;
}

Fila* Inverte_fila(Fila *F){
    Pilha *P = Pilha_create();

    while(!Fila_queue_is_empty(F)){
        Pilha_push(P, Fila_dequeue(F));
    }
    while(!Fila_queue_is_empty(P)){
        Fila_enqueue(F, Pilha_pop(P));
    }

    free(P);
    return F;
}

Fila* Pilha_dequeue(Fila *F){
    Fila *filaAux = Fila_create();

    while(!Fila_queue_is_empty(F)){
        Pilha_push(filaAux, Pilha_pop(F));
    }

    Pilha_pop(filaAux);

    while(!Fila_queue_is_empty(filaAux)){
        Pilha_push(F, Pilha_pop(filaAux));
    }

    free(filaAux);
    return F;
}

//funcoes uteis

int Fila_queue_is_empty(Fila *F){
    if(F->tamanho == 0){
        return 1;
    }

    return 0;
}

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
        printf(" %d <-", n->val);
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

printf("\nElemento do inicio da fila: %d\n\n", Fila_peek(fila1));


Inverte_fila(fila1);
Fila_print(fila1);

Inverte_fila(fila1);
Pilha_dequeue(fila1);
Fila_print(fila1);
return (0);
}
