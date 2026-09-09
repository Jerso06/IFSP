#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node{
    int val;
    struct Node* left;
    struct Node* right;
} Node;

Node* createTree(int valor){
    Node* n = (Node*) calloc(1, sizeof(Node));

    n->val = valor;
    n->left = NULL;
    n->right = NULL;

    return n;
}

typedef struct NoFila {
    Node* n;
    struct NoFila* proximo;
} NoFila;

typedef struct Fila{
    int tamanho;
    NoFila *inicio, *fim;
} Fila;

Fila* createFila(){
    Fila* f = (Fila*) calloc(1, sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    f->tamanho = 0;
    return f;
}

void enfileirar(Fila* f, Node* raiz){
    NoFila* nf = (NoFila*) calloc(1, sizeof(NoFila));
    nf->n = raiz;
    nf->proximo = NULL;

    if(f->fim == NULL){
        f->inicio = nf;
        f->fim = nf;
    }else{
        f->fim->proximo = nf;
        f->fim = nf;
    }

    f->tamanho++;
}

Node* desenfileirar(Fila* f){
    if(f->inicio == NULL){
        return NULL;
    }

    NoFila* nf = f->inicio;
    Node* n = nf->n;
    f->inicio = f->inicio->proximo;

    if(f->inicio == NULL){
        f->fim = f->inicio;
    }

    free(nf);
    f->tamanho--;
    return n;
}

Node* inserirNaArvore(Node* raiz, int valor){
    if(raiz == NULL){
        return createTree(valor);
    }

    if(valor < raiz->val){
        raiz->left = inserirNaArvore(raiz->left, valor);
    }else{
        raiz->right = inserirNaArvore(raiz->right, valor);
    }

    return raiz;
}

void preOrdem(Node* raiz){
    if(raiz == NULL){
        return;
    }

    printf("%d - ", raiz->val);
    preOrdem(raiz->left);
    preOrdem(raiz->right);
}

void inOrdem(Node* raiz){
    if(raiz == NULL){
        return;
    }

    inOrdem(raiz->left);
    printf("%d - ", raiz->val);
    inOrdem(raiz->right);
}

void posOrdem(Node* raiz){
    if(raiz == NULL){
        return;
    }

    posOrdem(raiz->left);
    posOrdem(raiz->right);
    printf("%d - ", raiz->val);
}

Node* buscarValor(Node* raiz, int valor){
    if(raiz == NULL || raiz->val == valor){
        return raiz;
    }

    if(valor < raiz->val){
        return buscarValor(raiz->left, valor);
    }else{
        return buscarValor(raiz->right, valor);
    }
}

Node* removerItem(Node* raiz, int valor){
    if(raiz == NULL){
        return raiz;
    }

    if(valor < raiz->val){
        raiz->left = removerItem(raiz->left, valor);
    }else if(valor > raiz->val){
        raiz->right = removerItem(raiz->right, valor);
    }else{
        //nó sem filho à esquerda
        if (raiz->left == NULL) {
            Node *temp = raiz->right;
            free(raiz);
            return temp;
        }
        //nó sem filho à direita
        else if (raiz->right == NULL) {
            Node *temp = raiz->left;
            free(raiz);
            return temp;
        }
        //nó com dois filhos
        //encontra o menor valor da subárvore direita
        else{
            Node* sucessor = raiz->right;
            while (sucessor->left != NULL) {
                sucessor = sucessor->left;
            }
            //copia o valor do sucessor para o nó atual
            raiz->val = sucessor->val;

            //remove o sucessor na subárvore direita
            raiz->right = removerItem(raiz->right, sucessor->val);
        }
    }

    return raiz;
}

int alturaArvore(Node* raiz){
    if(raiz == NULL){
        return -1;
    }

    int altLeft = alturaArvore(raiz->left);
    int altRight = alturaArvore(raiz->right);

    if(altLeft > altRight){
        return altLeft + 1;
    }else{
        return altRight + 1;
    }
}

void imprimirPorNivel(Node* raiz){
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
            Node* atual = desenfileirar(fila);
            printf("%d ", atual->val);

            if(atual->left != NULL){
                enfileirar(fila, atual->left);
            }
            if(atual->right != NULL){
                enfileirar(fila, atual->right);
            }
        }
        printf("\n");
        nivel++;
    }
}

int main()
{
    int n = 1;
    Node* arvore = NULL;
    Node* busca = NULL;

    while(n){
        printf("Informe um valor para adicionar na arvore (finalizar com 0): ");
        scanf("%d", &n);

        if(n != 0){
        arvore = inserirNaArvore(arvore, n);
        }
    }

    printf("\nPre-ordem: ");
    preOrdem(arvore);
    printf("\n\n");
    printf("In-ordem: ");
    inOrdem(arvore);
    printf("\n\n");
    printf("Pos-ordem: ");
    posOrdem(arvore);
    printf("\n\n");


    printf("Informe um elemento que deseja buscar: ");
    scanf("%d", &n);
    busca = buscarValor(arvore, n);
    if(busca == NULL){
        printf("Valor nao encontrado.\n\n");
    }else{
        printf("Valor esta presente na arvore.\n\n");
    }

    printf("Informe um elemento que deseja remover: ");
    scanf("%d", &n);
    arvore = removerItem(arvore, n);
    printf("Operacao concluida.\n");

    preOrdem(arvore); //verificar se o valor sumiu
    printf("\n\n");

    printf("Altura da arvore: %d\n", alturaArvore(arvore));

    printf("\n\nArvore por nivel: \n");
    imprimirPorNivel(arvore);

    return 0;
}
