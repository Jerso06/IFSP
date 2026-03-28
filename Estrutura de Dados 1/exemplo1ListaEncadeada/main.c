#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct _node {

    int val;
    struct _node *next;

} Node;


typedef struct _linked_list {

    Node *begin;
    Node *end;
    int cont;

} LinkedList;



Node *Node_create(int val) {
    Node *node = (Node*) calloc(1, sizeof(Node));
    node->val = val;
    node->next = NULL;
    return node;
}



LinkedList *LinkedList_create() {

    LinkedList *L = (LinkedList *) calloc(1, sizeof(LinkedList));
    L->begin = NULL;
    L->end = NULL;
    L->cont = 0;
    return L;
}

void LinkedList_add_first(LinkedList *L, int val) {

    Node *p = Node_create(val);

    if (L->begin == NULL){   //se a lista esta vazia

        p->next = L->begin;
        L->begin = p;
        L->end = p;

    } else {
        p->next = L->begin;
        L->begin = p;
    }

    L->cont++;
}

void LinkedList_add_last(LinkedList *L, int val){
    Node *p = Node_create(val);

    if(L->begin != NULL){ // lista não vazia
        L->end->next = p;
        L->end = p;
    }else{
        L->begin = p;
        L->end = p;
    }

    L->cont++;
}

void LinkedList_remove(LinkedList *L, int valor){

    Node *prev = NULL;
    Node *pos = NULL;

    if(L->begin != NULL){ //lista vazia
        if(L->begin->val == valor){ // primeiro nó
            if(L->begin->next == NULL){ // unico nó
                pos = L->begin;
                free(pos);
                L->begin = NULL;
                L->end = NULL;
            }else{ //remover primeiro elemento
                pos = L->begin;
                L->begin = pos->next;
                free(pos);
            }
            L->cont--;
        }else{ //remover elemento no meio/final
            pos = L->begin->next;
            prev = L->begin;
            while(pos != NULL && pos->val != valor){
                prev = pos;
                pos = pos->next;
            }
            if(pos != NULL){
                if(pos->next != NULL){ // não é o último elemento
                    prev->next = pos->next;
                    free(pos);
                    L->cont--;
                }else{ // é o último
                    prev->next = NULL;
                    free(pos);
                    L->end = prev;
                    L->cont--;
                }
            }
        }
    }
}

//funções úteis

int LinkedList_numero_elem(LinkedList *L){
    return (L->cont);
}

int LinkedList_prim(LinkedList *L){
    if(L->begin == NULL){
        return -1;
    }

    return L->begin->val;
}

int LinkedList_ult(LinkedList *L){
    if(L->end == NULL){
        return -1;
    }

    return L->end->val;
}

void LinkedList_copia(LinkedList *L, LinkedList *M){
    Node *p = L->begin;

    while(p != NULL){
        LinkedList_add_last(M, p->val);
        p = p->next;
    }
}

void LinkedList_copia_invertida(LinkedList *L, LinkedList *M){
    Node *p = L->begin;

    while(p != NULL){
        LinkedList_add_first(M, p->val);
        p = p->next;
    }
}

void LinkedList_append(LinkedList *L, LinkedList *M){
    Node *p = M->begin;

    while(p != NULL){
        LinkedList_add_last(L, p->val);
        p = p->next;
    }
}

void LinkedList_concatena(LinkedList *L, LinkedList *M, LinkedList *N){
    Node *p = L->begin;

    while(p != NULL){
        LinkedList_add_last(N, p->val);
        p = p->next;
    }

    p = M->begin;

    while(p != NULL){
        LinkedList_add_last(N, p->val);
        p = p->next;
    }
}

void LinkedList_transforma(LinkedList *L, LinkedList *M, LinkedList *N){
    Node *p = L->begin;

    while(p != NULL){
        LinkedList_add_last(N, p->val);
        LinkedList_remove(L, p->val);
        p = L->begin;
    }

    p = M->begin;

    while(p != NULL){
        LinkedList_add_last(N, p->val);
        LinkedList_remove(M, p->val);
        p = M->begin;
    }

    L = NULL;
    M = NULL;
}

void LinkedList_merge(LinkedList *L, LinkedList *M, LinkedList *N){
    Node *p = L->begin;
    Node *q = M->begin;

    while(p != NULL || q != NULL){
        if(p != NULL){
            LinkedList_add_last(N, p->val);
            p = p->next;
        }

        if(q != NULL){
            LinkedList_add_last(N, q->val);
            q = q->next;
        }
    }
}

void LinkedList_print(LinkedList *L) {
    Node *p = L->begin;
    printf("L -> ");
    // enquanto p n o chegou ao fim da lista, isto  ,
    // enquanto p estiver apontando para um n  da lista

    while (p != NULL) {
        printf("%d ->", p->val);
        p = p->next;
    }
    printf(" NULL  \n");
    printf("Quantidade de nos na lista: %d\n", LinkedList_numero_elem(L));
}

int main (){

LinkedList *La = LinkedList_create();

LinkedList_add_first(La,1);
LinkedList_add_first(La,2);
LinkedList_add_first(La,3);
LinkedList_add_first(La,4);
LinkedList_add_first(La,5);
LinkedList_print(La);

if(LinkedList_numero_elem(La) != 0){
    printf("\nPrimeiro valor: %d\n", LinkedList_prim(La));
    printf("Ultimo valor: %d\n\n", LinkedList_ult(La));
}else{
    printf("Lista Vazia!!!");
}

LinkedList *Lb = LinkedList_create();
LinkedList_copia_invertida(La, Lb);
printf("Lista Copiada de maneira invertida: \n");
LinkedList_print(Lb);

if(LinkedList_numero_elem != 0){
    printf("\nPrimeiro valor: %d\n", LinkedList_prim(Lb));
    printf("Ultimo valor: %d\n\n", LinkedList_ult(Lb));
}else{
    printf("Lista Vazia!!!");
}

LinkedList_append(La, Lb);
printf("Lista B adicionada na lista A: \n");
LinkedList_print(La);

if(LinkedList_numero_elem(La) != 0){
    printf("\nPrimeiro valor: %d\n", LinkedList_prim(La));
    printf("Ultimo valor: %d\n\n", LinkedList_ult(La));
}else{
    printf("Lista Vazia!!!");
}

LinkedList *Lc = LinkedList_create();
LinkedList_concatena(La, Lb, Lc);
printf("Lista Concatenada: \n");
LinkedList_print(Lc);

if(LinkedList_numero_elem(Lc) != 0){
    printf("\nPrimeiro valor: %d\n", LinkedList_prim(Lc));
    printf("Ultimo valor: %d\n", LinkedList_ult(Lc));
}else{
    printf("Lista Vazia!!!");
}

LinkedList *Ld = LinkedList_create();
LinkedList_transforma(La, Lb, Ld);
printf("Lista Transformada: \n");
LinkedList_print(Ld);

if(LinkedList_numero_elem(Ld) != 0){
    printf("\nPrimeiro valor: %d\n", LinkedList_prim(Ld));
    printf("Ultimo valor: %d\n", LinkedList_ult(Ld));
}else{
    printf("Lista Vazia!!!");
}

LinkedList *Le = LinkedList_create();
LinkedList_merge(La, Lb, Le);
printf("Lista Mergeada: \n");
LinkedList_print(Le);

if(LinkedList_numero_elem(Le) != 0){
    printf("\nPrimeiro valor: %d\n", LinkedList_prim(Le));
    printf("Ultimo valor: %d\n", LinkedList_ult(Le));
}else{
    printf("Lista Vazia!!!");
}
return (0);
}
