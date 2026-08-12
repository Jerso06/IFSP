#include <stdio.h>
#include <stdlib.h>

int menorElementoRecursivo(int v[], int tamanho){
    int menor = v[tamanho-1];

    if(tamanho == 1){
        return menor;
    }

    if(menor > menorElementoRecursivo(v, tamanho-1)){
        menor = menorElementoRecursivo(v, tamanho-1);
    }

    return menor;
}

int menorElementoInterativo(int v[], int tamanho){
    int menor;

    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            menor = v[i];
        }else if(v[i] < menor){
            menor = v[i];
        }
    }

    return menor;
}

int main()
{
    int vetor[] = {10, 2, 5, 10, 1};

    printf("Menor valor do vetor: %d", menorElementoInterativo(vetor, 5));
    printf("\n\nMenor valor do vetor: %d", menorElementoRecursivo(vetor, 5));
    return 0;
}
