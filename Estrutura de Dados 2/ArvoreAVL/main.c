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

Arv* inserirArvore(Arv* raiz, int valor){
    if(raiz == NULL){
        return criarArvore(valor);
    }

    if(valor < raiz->chave){
        raiz->sae = inserirArvore(raiz->sae, valor);
    }else{
        raiz->sad = inserirArvore(raiz->sad, valor);
    }

    return raiz;
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

int main()
{
    printf("Hello world!\n");
    return 0;
}
