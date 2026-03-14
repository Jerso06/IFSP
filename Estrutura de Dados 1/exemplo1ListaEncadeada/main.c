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
        }else{ //remover elemento no meio/final
            pos = L->begin->next;
            prev = L->begin;
            while(pos != NULL && pos->val != valor){
                prev = pos;
                pos = pos->next;
            }
            if(pos->next != NULL){ // não é o último elemento
                prev->next = pos->next;
                free(pos);
            }else{ // é o último
                prev->next = NULL;
                free(pos);
                L->end = prev;
            }

        }
    }
}



void LinkedList_print(LinkedList *L) {
    Node *p = L->begin;
    printf("L -> ");
    // enquanto p n�o chegou ao fim da lista, isto �,
    // enquanto p estiver apontando para um n� da lista

    while (p != NULL) {
        printf("%d ->", p->val);
        p = p->next;
    }
    printf(" NULL  \n");
}



int main (){

LinkedList *La = LinkedList_create();

LinkedList_add_first(La,5);
LinkedList_add_first(La,4);
LinkedList_add_first(La,2);
LinkedList_add_first(La,10);
LinkedList_add_first(La,20);
LinkedList_add_first(La,8);
LinkedList_add_first(La,12);
LinkedList_add_first(La,1);
LinkedList_print(La);
LinkedList_remove(La, 20);
LinkedList_remove(La, 2);
LinkedList_remove(La, 12);
LinkedList_print(La);

return (0);
}
