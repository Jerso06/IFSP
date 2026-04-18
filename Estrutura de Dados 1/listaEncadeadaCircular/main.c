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
        p->next = p;
        p->prev = p;
    } else {
        p->next = L->begin;
        p->prev = L->end;
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
        p->next = L->begin;
        L->end = p;
    }else{
        L->begin = p;
        L->end = p;
        p->next = p;
        p->prev = p;
    }

    L->cont++;

}
void LinkedList_remove(LinkedList *L, int valor){

    Node *ante = NULL;
    Node *pos = NULL;

    if(L->begin != NULL){ //lista  não vazia
        if(L->begin->val == valor){ // primeiro nó
            if(L->cont == 1){ // unico nó
                pos = L->begin;
                free(pos);
                L->begin = NULL;
                L->end = NULL;
            }else{ //remover primeiro elemento
                pos = L->begin;
                L->begin = pos->next;
                L->begin->prev = pos->prev;
                free(pos);
            }
            L->cont--;
        }else{ //remover elemento no meio/final
            pos = L->begin->next;
            ante = L->begin;
            int contador = 0;
            while(contador < L->cont && pos->val != valor){
                ante = pos;
                pos = pos->next;
                contador++;
            }
            if(contador < L->cont){
                if(contador != L->cont){ // não é o último elemento
                    ante->next = pos->next;
                    pos->next->prev = ante;
                    free(pos);
                }else{ // é o último
                    ante->next = L->begin;
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
    int contador = 0;

    while(contador < L->cont){
        LinkedList_add_last(M, p->val);
        p = p->next;
        contador++;
    }
}

void LinkedList_copia_invertida(LinkedList *L, LinkedList *M){
    Node *p = L->begin;
    int contador = 0;

    while(contador < L->cont){
        LinkedList_add_first(M, p->val);
        p = p->next;
        contador++;
    }
}

void LinkedList_append(LinkedList *L, LinkedList *M){
    Node *p = M->begin;
    int contador = 0;

    while(contador < M->cont){
        LinkedList_add_last(L, p->val);
        p = p->next;
        contador++;
    }
}

void LinkedList_concatena(LinkedList *L, LinkedList *M, LinkedList *N){
    Node *p = L->begin;
    int contador = 0;

    while(contador < L->cont){
        LinkedList_add_last(N, p->val);
        p = p->next;
        contador++;
    }

    p = M->begin;
    contador = 0;

    while(contador < M->cont){
        LinkedList_add_last(N, p->val);
        p = p->next;
        contador++;
    }
}

void LinkedList_transforma(LinkedList *L, LinkedList *M, LinkedList *N){
    Node *p = L->begin;
    int contador = 0, contL = L->cont, contM = M->cont;

    while(contador <contL){
        LinkedList_add_last(N, p->val);
        LinkedList_remove(L, p->val);
        p = L->begin;
        contador++;
    }

    p = M->begin;
    contador = 0;

    while(contador < contM){
        LinkedList_add_last(N, p->val);
        LinkedList_remove(M, p->val);
        p = M->begin;
        contador++;
    }

    free(L);
    free(M);
    L = NULL;
    M = NULL;
}

void LinkedList_merge(LinkedList *L, LinkedList *M, LinkedList *N){
    Node *p = L->begin;
    Node *q = M->begin;
    int contL = 0, contM = 0;

    while(contL < L->cont || contM < M->cont){
        if(contL < L->cont){
            LinkedList_add_last(N, p->val);
            p = p->next;
            contL++;
        }

        if(contM < M->cont){
            LinkedList_add_last(N, q->val);
            q = q->next;
            contM++;
        }
    }
}

void LinkedList_print(LinkedList *L) {
    Node *p = L->begin;
    int contador = 0;
    printf("L -> ");

    while (contador < L->cont) {
        printf("%d ->", p->val);
        p = p->next;
        contador++;
    }
    printf(" Fim do Ciclo  \n");
    printf("Quantidade de nos na lista: %d\n\n", LinkedList_numero_elem(L));
}

void LinkedList_print_reverso(LinkedList *L) {
    Node *p = L->end;
    int contador = 0;

    printf("L -> ");

    while (contador < L->cont) {
        printf("%d <-", p->val);
        p = p->prev;
        contador++;
    }
    printf(" Fim do Ciclo  \n");
    printf("Quantidade de nos na lista: %d\n\n", LinkedList_numero_elem(L));
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

printf("Copia: \n");
LinkedList *Lc = LinkedList_create();
LinkedList_copia(La, Lc);
LinkedList_print(Lc);

printf("Copia invertida: \n");
LinkedList *Ld = LinkedList_create();
LinkedList_copia_invertida(La, Ld);
LinkedList_print(Ld);

printf("Append: \n");
LinkedList *Le = LinkedList_create();
LinkedList_append(La, Lb);
LinkedList_print(La);

printf("Concatena: \n");
LinkedList *Lf = LinkedList_create();
LinkedList_concatena(La, Lb, Lf);
LinkedList_print(Lf);

printf("Merge: \n");
LinkedList *Lh = LinkedList_create();
LinkedList_merge(La, Lb, Lh);
LinkedList_print(Lh);

printf("Transforma: \n");
LinkedList *Lg = LinkedList_create();
LinkedList_transforma(La, Lb, Lg);
LinkedList_print(Lg);

printf("Copia com print reverso: \n");
LinkedList *Li = LinkedList_create();
LinkedList_copia(Lh, Li);
LinkedList_print_reverso(Li);

return (0);
}
