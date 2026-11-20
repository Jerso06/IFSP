#include <stdio.h>
#include <stdlib.h>

typedef struct Vertice Vertice;

typedef struct Arestas{
    Vertice* destino;
    struct Arestas *next;
} Arestas;

typedef struct Vertice{
    int val;
    struct Vertice *prox;
    Arestas *adj;

    int cor;
    struct Vertice *predecessor;
} Vertice;

typedef struct Grafo{
    int qtdVertices;
    Vertice *primeiro;
    Vertice *ultimo;
} Grafo;

typedef struct NoFila{
    Vertice* item;
    struct NoFila* prox;
} NoFila;

typedef struct Fila{
    NoFila *comeco;
    NoFila *fim;
} Fila;

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

    v->predecessor = NULL;
    v->cor = 0;
    return v;
}

Arestas* criarAresta(Vertice* destino){
    Arestas* a = (Arestas*) calloc(1, sizeof(Arestas));
    a->destino = destino;
    a->next = NULL;

    return a;
}

Fila* criarFila(){
    Fila* f = (Fila*) calloc(1, sizeof(Fila));
    f->comeco = NULL;
    f->fim = NULL;

    return f;
}

void enfileirar(Fila* f, Vertice* v){
    NoFila* nf = (NoFila*) calloc(1, sizeof(NoFila));
    nf->item = v;
    nf->prox = NULL;

    if(f->comeco == NULL){
        f->comeco = nf;
        f->fim = nf;
    }else{
        f->fim->prox = nf;
        f->fim = nf;
    }
}

Vertice* desenfileirar(Fila* f){

    if(f->comeco == NULL){
        return NULL;
    }

    NoFila* nf = f->comeco;

    f->comeco = nf->prox;

    if(f->comeco == NULL){
        f->fim = NULL;
    }

    Vertice* v = nf->item;

    free(nf);

    return v;
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
    Vertice* d = g->primeiro;

    while(v != NULL && v->val != origem){
        v = v->prox;
    }
    while(d != NULL && d->val != destino){
        d = d->prox;
    }

    Arestas* aux = v->adj;
    v->adj = criarAresta(d);
    v->adj->next = aux;
    return;
}

void bfs(Grafo *g, int ori, int dest){
    Fila* f = criarFila();
    Vertice* origem = NULL;
    Vertice* destino = NULL;

    Vertice* aux = g->primeiro;
    while(aux != NULL){
        aux->cor = 0;
        aux->predecessor = NULL;

        if(aux->val == ori){
            origem = aux;
        }

        if(aux->val == dest){
            destino = aux;
        }

        aux = aux->prox;
    }

    if(origem == NULL || destino == NULL){
        printf("Caminho impossivel");
        return;
    }

    origem->cor = 1;
    enfileirar(f, origem);

    while(f->comeco != NULL){
        aux = desenfileirar(f);
        Arestas* adjacente = aux->adj;
        if(adjacente != NULL){
            while(adjacente != NULL){
                if(adjacente->destino->cor == 0){
                    adjacente->destino->cor = 1;
                    adjacente->destino->predecessor = aux;
                    enfileirar(f, adjacente->destino);
                }
                adjacente = adjacente->next;
            }
        }
    }

    int caminho[g->qtdVertices];
    int tamanhoCaminho = 0;

    caminho[tamanhoCaminho++] = destino->val;
    Vertice* aux2 = destino->predecessor;
    while(aux2 != NULL && aux2 != origem){
        caminho[tamanhoCaminho] = aux2->val;
        tamanhoCaminho++;
        aux2 = aux2->predecessor;
    }
    caminho[tamanhoCaminho] = origem->val;

    if(aux2 == NULL){
        printf("Caminho não encontrado");
        return;
    }

    printf("Caminho: ");
    for(int i = tamanhoCaminho; i > -1; i--){
        printf("%d ", caminho[i]);
    }
}

int dfsAux(Vertice* atual, Vertice* destino, int caminho[], int *tamanho){
    atual->cor = 1;
    caminho[(*tamanho)++] = atual->val;
    Arestas *adj = atual->adj;

    if(atual == destino){
        return 1;
    }

    while(adj != NULL){
        Vertice* aux = adj->destino;

        if(aux->cor == 0){
            if(dfsAux(aux, destino, caminho, tamanho)){
                return 1;
            }
        }
        adj = adj->next;
    }

    (*tamanho)--;

    return 0;
}

void dfs(Grafo *g, int ori, int dest){
    Vertice* aux = g->primeiro;
    Vertice* origem = NULL;
    Vertice* destino = NULL;

    while(aux != NULL){
        aux->cor = 0;

        if(aux->val == ori){
            origem = aux;
        }

        if(aux->val == dest){
            destino = aux;
        }

        aux = aux->prox;
    }

    if(origem == NULL || destino == NULL){
        printf("Caminho impossivel");
        return;
    }

    int caminho[g->qtdVertices];
    int tamanhoCaminho = 0;

    int result = dfsAux(origem, destino, caminho, &tamanhoCaminho);

    if(result == 1){
        printf("Caminho: ");
        for(int i = 0; i < tamanhoCaminho; i++){
            printf("%d ", caminho[i]);
        }
    }
}

int main(){

    Grafo* g = criarGrafo();

    // Criando 10 vertices (0 ate 9)
    for(int i = 0; i < 10; i++){
        AdicionarVertice(g);
    }

    // Adicionando arestas
    AdicionarAresta(g, 0, 1);
    AdicionarAresta(g, 0, 2);

    AdicionarAresta(g, 1, 3);
    AdicionarAresta(g, 1, 4);

    AdicionarAresta(g, 2, 5);

    AdicionarAresta(g, 3, 6);

    AdicionarAresta(g, 4, 9);

    AdicionarAresta(g, 5, 7);

    AdicionarAresta(g, 6, 8);

    AdicionarAresta(g, 7, 8);

    AdicionarAresta(g, 8, 9);

    // Executando BFS: origem 0, destino 9
    bfs(g, 0, 6);

    printf("\n\n");

    dfs(g, 0, 4);

    return 0;
}
