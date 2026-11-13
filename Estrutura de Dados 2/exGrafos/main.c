#include <stdio.h>
#include <stdlib.h>

typedef struct Arestas{
    int destino;
    struct Arestas *next;
} Arestas;

typedef struct Vertice{
    int val;
    struct Vertice *prox;
    Arestas *adj;
} Vertice;

typedef struct Grafo{
    int qtdVertices;
    Vertice *primeiro;
    Vertice *ultimo;
} Grafo;

Grafo* criarGrafo(){
    Grafo* g = (Grafo*) calloc(1, sizeof(Grafo));
    g->qtdVertices = 0;
    g->primeiro = NULL;
    g->ultimo = NULL;

    return g;
}

Vertice* criarVertice(int num){
    Vertice* v = (Vertice*) calloc(1, sizeof(Vertice));
    v->val = num;
    v->prox = NULL;
    v->adj = NULL;

    return v;
}

Arestas* criarAresta(int destino){
    Arestas* a = (Arestas*) calloc(1, sizeof(Arestas));
    a->destino = destino;
    a->next = NULL;

    return a;
}

void AdicionarVertice(Grafo *g){
    Vertice* v = criarVertice(g->qtdVertices);

    if(g->ultimo == NULL){ //grafo vazio
        g->primeiro = v;
        g->ultimo = v;
    }else{
        g->ultimo->prox = v;
        g->ultimo = v;
    }

    g->qtdVertices++;
}

void AdicionarAresta(Grafo* g, int origem, int destino){
    Vertice* v = g->primeiro;

    while(v != NULL && v->val != origem){
        v = v->prox;
    }

    if(v == NULL){
        printf("\nVertice de origem nao encontrada.\n");
        return;
    }

    Arestas* aux = v->adj;
    v->adj = criarAresta(destino);
    v->adj->next = aux;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
