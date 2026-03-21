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
    Node *node = (Node*) calloc(5, sizeof(Node));
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
    printf("Quantidade de nos na lista: %d\n", LinkedList_contagem(L));
}

int LinkedList_contagem(LinkedList *L){
    return (L->cont);
}

int LinkedList_return_first(LinkedList *L){
    if(L->begin == NULL){
        return -1;
    }

    return L->begin->val;
}

int LinkedList_return_last(LinkedList *L){
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

int main (){

LinkedList *La = LinkedList_create();

LinkedList_add_first(La,1);
LinkedList_add_first(La,2);
LinkedList_add_first(La,3);
LinkedList_add_first(La,4);
LinkedList_add_first(La,5);
LinkedList_print(La);
LinkedList_remove(La, 20);
LinkedList_remove(La, 2);
LinkedList_print(La);

if(LinkedList_contagem(La) != 0){
    printf("\nPrimeiro valor: %d\n", LinkedList_return_first(La));
    printf("Ultimo valor: %d\n\n", LinkedList_return_last(La));
}else{
    printf("Lista Vazia!!!");
}

LinkedList *Lb = LinkedList_create();
LinkedList_copia(La, Lb);
/*LinkedList_add_last(Lb, 6);
LinkedList_add_last(Lb, 7);
LinkedList_add_last(Lb, 8);
LinkedList_add_last(Lb, 9);
LinkedList_add_last(Lb, 10);*/

LinkedList_print(Lb);

if(LinkedList_contagem(La) != 0){
    printf("\nPrimeiro valor: %d\n", LinkedList_return_first(Lb));
    printf("Ultimo valor: %d\n\n", LinkedList_return_last(Lb));
}else{
    printf("Lista Vazia!!!");
}

return (0);
}
