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
    if(g == NULL){
        printf("\nGrafo inexistente.\n");
        return;
    }else if(origem >= g->qtdVertices || origem < 0){
        printf("\nVertice de origem inexistente.\n");
        return;
    }else if(destino >= g->qtdVertices || destino < 0){
        printf("\nVertice de destino inexistente.\n");
        return;
    }

    Vertice* v = g->primeiro;

    while(v != NULL && v->val != origem){
        v = v->prox;
    }

    Arestas* aux = v->adj;
    v->adj = criarAresta(destino);
    v->adj->next = aux;
    return;
}

void DFSPrincipal(Grafo* g, int atual, int vistos[]){
    vistos[atual] = 1;

    Vertice* v = g->primeiro;
    while(v != NULL && v->val != atual){
        v = v->prox;
    }

    if(v == NULL){
        return;
    }

    Arestas* a = v->adj;

    while(a != NULL){
        if(vistos[a->destino] == 0){
            DFSPrincipal(g, a->destino, vistos);
        }

        a = a->next;
    }
}

void DFS(Grafo* g, int inicio){
    if(g == NULL || inicio < 0 || inicio >= g->qtdVertices){
            printf("\nImpossivel encontrar um caminho.\n");
        return;
    }

    int vistos[g->qtdVertices];
    for(int i = 0; i < g->qtdVertices; i++){
        vistos[i] = 0;
    }

    DFSPrincipal(g, inicio, vistos);
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
