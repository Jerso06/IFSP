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

//lista inteiro
typedef struct _intNode{
    int valor;
    struct _intNode *next;
} IntNode;

//no da fila dupla
typedef struct _filaNode{
    IntNode *lista;
    int qtdInteiros;
    struct _filaNode *next;
} FilaNode;

// Fila
typedef struct _filaDupla{
    FilaNode *begin;
    FilaNode *end;
    int qtdListas;
    int totalInteiros;
} FilaDupla;

FilaDupla *FilaDupla_create(){
    FilaDupla *FD = malloc(sizeof(FilaDupla));

    FD->begin = NULL;
    FD->end = NULL;
    FD->qtdListas = 0;
    FD->totalInteiros = 0;

    return FD;
}

void FilaDupla_enqueue(FilaDupla *FD, IntNode *lista, int qtd){
    FilaNode *novo = malloc(sizeof(FilaNode));

    novo->lista = lista;
    novo->qtdInteiros = qtd;
    novo->next = NULL;

    if(FD->begin == NULL){
        FD->begin = novo;
        FD->end = novo;
    }else{
        FD->end->next = novo;
        FD->end = novo;
    }

    FD->qtdListas++;
    FD->totalInteiros += qtd;
}

FilaNode *FilaDupla_dequeue(FilaDupla *FD){
    if(FD->begin == NULL)
        return NULL;

    FilaNode *aux = FD->begin;

    FD->begin = aux->next;

    if(FD->begin == NULL)
        FD->end = NULL;

    FD->qtdListas--;
    FD->totalInteiros -= aux->qtdInteiros;

    return aux;
}

int Fila_totalInteiros(FilaDupla *FD){
    return FD->totalInteiros;
}

IntNode *insereFim(IntNode *lista, int valor){
    IntNode *novo = malloc(sizeof(IntNode));

    novo->valor = valor;
    novo->next = NULL;

    if(lista == NULL)
        return novo;

    IntNode *aux = lista;

    while(aux->next != NULL)
        aux = aux->next;

    aux->next = novo;

    return lista;
}

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

int Pilha_pertence(Pilha *P, int x){
    int cont = 1;
    Node *n = P->begin;

    while(n != NULL && n->val != x){
        cont++;
        n = n->next;
    }

    n = NULL;
    free(n);
    if(cont > P->tamanho){
        return 0;
    }

    return cont;
}

void Intercala_Pilha(Pilha *P1, Pilha *P2, Pilha *PR){
    Node *n1 = P1->end;
    Node *n2 = P2->end;

    while(n1 != NULL && n2 != NULL){
        if(n1 != NULL){
            Pilha_push(PR, Pilha_pop(P1));
            n1 = P1->end;
        }

        if(n2 != NULL){
            Pilha_push(PR, Pilha_pop(P2));
            n2 = P2->end;
        }
    }
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

//printf
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

void Pilha_print(Pilha *P) {
    Node *n = P->end;
    printf("Topo da pilha: \n");

    while (n != NULL) {
        printf(" - %d \n", n->val);
        n = n->prev;
    }
    printf("Comeco da pilha  \n\n");
}

void FilaDupla_print(FilaDupla *FD){

    FilaNode *filaAux = FD->begin;
    int numeroLista = 1;

    printf("===== FILA DE LISTAS =====\n\n");

    while(filaAux != NULL){

        printf("Lista %d: ", numeroLista);

        IntNode *listaAux = filaAux->lista;

        while(listaAux != NULL){
            printf("%d ", listaAux->valor);
            listaAux = listaAux->next;
        }

        printf("\n");

        filaAux = filaAux->next;
        numeroLista++;
    }

    printf("\nQuantidade de listas: %d\n", FD->qtdListas);
    printf("Total de inteiros: %d\n", FD->totalInteiros);
}

int main (){
/*
Pilha *pilha1 = Pilha_create();
Pilha_push(pilha1, 1);
Pilha_push(pilha1, 2);
Pilha_push(pilha1, 3);
Pilha_push(pilha1, 4);
Pilha_push(pilha1, 5);
int pos = Pilha_pertence(pilha1, 2);

if(pos != 0){
    printf("Valor na %d posicao \n\n", pos);
}else{
    printf("Valor nao encontrado\n\n");
}

Pilha *pilha2 = Pilha_create();
Pilha_push(pilha2, 6);
Pilha_push(pilha2, 7);
Pilha_push(pilha2, 8);
Pilha_push(pilha2, 9);
Pilha_push(pilha2, 10);

Pilha *pilha3 = Pilha_create();
Intercala_Pilha(pilha1, pilha2, pilha3);
Pilha_print(pilha3);*/


FilaDupla *FD = Fila_create();

// Lista 1: [1, 2, 3]
IntNode *lista1 = NULL;
lista1 = insereFim(lista1, 1);
lista1 = insereFim(lista1, 2);
lista1 = insereFim(lista1, 3);

FilaDupla_enqueue(FD, lista1, lista1);

// Lista 2: [10, 20]
IntNode *lista2 = NULL;
lista2 = insereFim(lista2, 10);
lista2 = insereFim(lista2, 20);

FilaDupla_enqueue(FD, lista2, 2);

// Lista 3: [7, 8, 9, 10]
IntNode *lista3 = NULL;
lista3 = insereFim(lista3, 7);
lista3 = insereFim(lista3, 8);
lista3 = insereFim(lista3, 9);
lista3 = insereFim(lista3, 10);


FilaDupla_enqueue(FD, lista3, 4);

printf("Total de inteiros na fila: %d\n", Fila_totalInteiros(FD));

FilaNode *removido = FilaDupla_dequeue(FD);

printf("Total apos remover a primeira lista: %d\n", Fila_totalInteiros(FD));

FilaDupla_print(FD);

return 0;
}
