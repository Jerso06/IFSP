#include <stdio.h>
#include <stdlib.h>

typedef struct Arv{
    int chave;
    struct Arv* sad;
    struct Arv* sae;
}Arv;

Arv* criarArvore(int valor){
    Arv* a = (Arv*) calloc(1, sizeof(Arv));
    a->chave = valor;
    a->sad = NULL;
    a->sae = NULL;

    return a;
}

typedef struct NoFila {
    Arv* n;                  // Tipo alterado de Node* para Arv*
    struct NoFila* proximo;
} NoFila;

typedef struct Fila {
    int tamanho;
    NoFila *inicio, *fim;
} Fila;

// --- Funções da Fila ---
Fila* createFila() {
    Fila* f = (Fila*) calloc(1, sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    f->tamanho = 0;
    return f;
}

void enfileirar(Fila* f, Arv* raiz) {
    if (raiz == NULL) return; // Evita enfileirar nós nulos

    NoFila* nf = (NoFila*) calloc(1, sizeof(NoFila));
    nf->n = raiz;
    nf->proximo = NULL;

    if (f->fim == NULL) {
        f->inicio = nf;
        f->fim = nf;
    } else {
        f->fim->proximo = nf;
        f->fim = nf;
    }

    f->tamanho++;
}

Arv* desenfileirar(Fila* f) {
    if (f->inicio == NULL) {
        return NULL;
    }

    NoFila* nf = f->inicio;
    Arv* n = nf->n;
    f->inicio = f->inicio->proximo;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(nf);
    f->tamanho--;
    return n;
}

int alturaArvore(Arv* raiz){
    if(raiz == NULL){
        return -1;
    }

    int alturaEsquerda = alturaArvore(raiz->sae);
    int alturaDireita = alturaArvore(raiz->sad);

    if(alturaEsquerda > alturaDireita) return alturaEsquerda+1;
    else return alturaDireita+1;
}

int fatorBalanceamento(Arv* raiz) {
    if (raiz == NULL) return 0;
    return alturaArvore(raiz->sae) - alturaArvore(raiz->sad);
}

Arv* balancearArvore(Arv* raiz){
    if(raiz == NULL) return NULL;

    int fb = fatorBalanceamento(raiz);

    if(fb > 1){
        if(fatorBalanceamento(raiz->sae) >= 0){
            Arv* aux = raiz->sae;
            raiz->sae = aux->sad;
            aux->sad = raiz;
            return aux;
        }else{
            Arv* aux = raiz->sae;
            Arv* aux2 = aux->sad;

            //rotacao a esquerda dos elementos B e C
            aux->sad = aux2->sae;
            aux2->sae = aux;

            //rotacao a direita dos elementos A, B e C
            raiz->sae = aux2->sad;
            aux2->sad = raiz;
            return aux2;
        }
    }

    if(fb < -1){
        if(fatorBalanceamento(raiz->sad) <= 0){
            Arv* aux = raiz->sad;
            raiz->sad = aux->sae;
            aux->sae = raiz;
            return aux;
        }else{
            Arv* aux = raiz->sad;
            Arv* aux2 = aux->sae;

            //rotacao a direita dos elementos B e C
            aux->sae = aux2->sad;
            aux2->sad = aux;

            //rotacao a esquerda dos elementos A, B e C
            raiz->sad = aux2->sae;
            aux2->sae = raiz;
            return aux2;
        }
    }

    return raiz;
}

Arv* inserirArvore(Arv* raiz, int valor){
    if(raiz == NULL){
        return criarArvore(valor);
    }

    if(valor < raiz->chave){
        raiz->sae = inserirArvore(raiz->sae, valor);
    }else if(valor > raiz->chave){
        raiz->sad = inserirArvore(raiz->sad, valor);
    }else{
        return raiz;
    }

    return balancearArvore(raiz);
}

Arv* removerArvore(Arv* raiz, int valor){
    if(raiz == NULL){
        return NULL;
    }

    if(valor < raiz->chave){
        raiz->sae = removerArvore(raiz->sae, valor);
    }else if(valor > raiz->chave){
        raiz->sad = removerArvore(raiz->sad, valor);
    }else{
        if(raiz->sae == NULL){
            Arv* temp = raiz->sad;
            free(raiz);
            return temp;
        }else if(raiz->sad == NULL){
            Arv* temp = raiz->sae;
            free(raiz);
            return temp;
        }else{
            Arv* sucessor = raiz->sae;

            while(sucessor->sad != NULL){
                sucessor = sucessor->sad;
            }

            raiz->chave = sucessor->chave;

            raiz->sae = removerArvore(raiz->sae, sucessor->chave);
        }
    }

    return balancearArvore(raiz);
}

Arv* buscarValor(Arv* raiz, int valor){
    if(raiz == NULL || raiz->chave == valor){
        return raiz;
    }

    if(valor < raiz->chave){
        return buscarValor(raiz->sae, valor);
    }else{
        return buscarValor(raiz->sad, valor);
    }
}

Arv* inverteArvore(Arv* raiz){
    if(raiz == NULL){
        return NULL;
    }

    Arv* esquerda = inverteArvore(raiz->sae);
    Arv* direita = inverteArvore(raiz->sad);

    if(esquerda != NULL || direita != NULL){
        raiz->sae = direita;
        raiz->sad = esquerda;
    }

    return raiz;
}


//funcoes de apresentacao
void preOrdem(Arv* raiz){
    if(raiz == NULL) return;

    printf("%d ", raiz->chave);
    preOrdem(raiz->sae);
    preOrdem(raiz->sad);
}

void inOrdem(Arv* raiz){
    if(raiz == NULL) return;

    inOrdem(raiz->sae);
    printf("%d ", raiz->chave);
    inOrdem(raiz->sad);
}

void posOrdem(Arv* raiz){
    if(raiz == NULL) return;

    posOrdem(raiz->sae);
    posOrdem(raiz->sad);
    printf("%d ", raiz->chave);
}

void imprimirPorNivel(Arv* raiz){
    if(raiz == NULL){
        return;
    }

    Fila* fila = createFila();
    enfileirar(fila, raiz);
    int nivel = 0;

    while(fila->inicio != NULL){
        int tamanhoNivel = fila->tamanho;
        printf("Nivel %d: ", nivel);

        for(int i = 0; i < tamanhoNivel; i++){
            Arv* atual = desenfileirar(fila);
            printf("%d ", atual->chave);

            if(atual->sae != NULL){
                enfileirar(fila, atual->sae);
            }
            if(atual->sad != NULL){
                enfileirar(fila, atual->sad);
            }
        }
        printf("\n");
        nivel++;
    }

    free(fila);
}

int main()
{
    Arv* raiz = NULL;

    int elementos[] = {10, 20, 30, 40, 50, 25};
    for (int i = 0; i < 6; i++) {
        raiz = inserirArvore(raiz, elementos[i]);
    }

    printf("Elementos por nivel: \n");
    imprimirPorNivel(raiz);
    printf("\n");

    return 0;
}
