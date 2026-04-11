#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct _node {

    int val;
    struct _node *prev;
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
    node->prev = NULL;
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
        L->begin = p;
        L->end = p;

    } else {
        p->next = L->begin;
        L->begin->prev = p;
        L->begin = p;
    }

    L->cont++;
}

void LinkedList_add_last(LinkedList *L, int val){
    Node *p = Node_create(val);

    if(L->begin != NULL){ // lista não vazia
        L->end->next = p;
        p->prev = L->end;
        L->end = p;
    }else{
        L->begin = p;
        L->end = p;
    }

    L->cont++;
}

void LinkedList_remove(LinkedList *L, int valor){

    Node *ante = NULL;
    Node *pos = NULL;

    if(L->begin != NULL){ //lista  não vazia
        if(L->begin->val == valor){ // primeiro nó
            if(L->begin->next == NULL){ // unico nó
                pos = L->begin;
                free(pos);
                L->begin = NULL;
                L->end = NULL;
            }else{ //remover primeiro elemento
                pos = L->begin;
                L->begin = pos->next;
                L->begin->prev = NULL;
                free(pos);
            }
            L->cont--;
        }else{ //remover elemento no meio/final
            pos = L->begin->next;
            ante = L->begin;
            while(pos != NULL && pos->val != valor){
                ante = pos;
                pos = pos->next;
            }
            if(pos != NULL){
                if(pos->next != NULL){ // não é o último elemento
                    ante->next = pos->next;
                    pos->next->prev = ante;
                    free(pos);
                }else{ // é o último
                    ante->next = NULL;
                    free(pos);
                    L->end = ante;
                }
                L->cont--;
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

    free(L);
    free(M);
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

    while (p != NULL) {
        printf("%d ->", p->val);
        p = p->next;
    }
    printf(" NULL  \n");
    printf("Quantidade de nos na lista: %d\n", LinkedList_numero_elem(L));
}

int main (){

LinkedList *La = LinkedList_create();

LinkedList_add_first(La,5);
LinkedList_add_first(La,4);
LinkedList_add_first(La,3);
LinkedList_add_first(La,2);
LinkedList_add_first(La,1);
LinkedList_print(La);

LinkedList *Lb = LinkedList_create();
LinkedList_add_last(Lb,5);
LinkedList_add_last(Lb,4);
LinkedList_add_last(Lb,3);
LinkedList_add_last(Lb,2);
LinkedList_add_last(Lb,1);
LinkedList_print(Lb);

return (0);
}
