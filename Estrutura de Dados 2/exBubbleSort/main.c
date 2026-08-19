#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void bubbleSort(int vet[], int tamanho){
    int trocou;

    for(int i = 0; i < tamanho - 1; i++){
        trocou = 0;

        for(int j = 0; j < tamanho - 1 - i; j++){
            if(vet[j] > vet[j+1]){
                trocou = 1;
                int temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }

        if(!trocou){
            break;
        }
    }
}

int buscaBinaria(int vet[], int tamanho, int valor){
    int inicio = 0, meio, fim = tamanho - 1;

    while(inicio <= fim){
        meio = inicio + (fim - inicio) / 2;

        if(vet[meio] == valor){
            return meio;
        }

        if(vet[meio] > valor){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }

    return -1;
}

int buscaBinariaComparacao(int vet[], int tamanho, int valor){
    int inicio = 0, meio, fim = tamanho - 1, cont = 0;

    while(inicio <= fim){
        cont++;
        meio = inicio + (fim - inicio) / 2;

        if(vet[meio] == valor){
            return cont;
        }

        if(vet[meio] > valor){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }

    return cont;
}

int buscaSequencialComparacao(int vet[], int tamanho, int valor){
    int cont = 0;

    for(int i = 0; i < tamanho; i++){
        cont++;
        if(vet[i] == valor){
            return cont;
        }
    }

    return cont;
}

int main()
{
    int vetor[10];
    int tamanho = 10;
    int valor;
    int pos;

    srand(time(NULL));

    for(int i = 0; i < tamanho; i++){
        vetor[i] = (rand() % 100) + 1;
    }

    printf("Vetor com 10 valores aleatorios (nao ordenado):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    bubbleSort(vetor, 10);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    printf("Informe o valor que deseja buscar no vetor: ");
    scanf("%d", &valor);
    pos = buscaBinaria(vetor, tamanho, valor);
    if(pos != -1){
        printf("Valor encontrado no index %d", pos);
    }else{
        printf("Valor nao encontrado");
    }
    printf("\n\n");

    printf("Comparacao busca binaria e sequencial para vetor de 10 elementos: \n");
    printf("- Sequencial melhor caso (primeiro elemento): %d interacoes - O(1)\n", buscaSequencialComparacao(vetor, tamanho, vetor[0]));
    printf("- Sequencial pior caso (ultimo elemento): %d interacoes - O(n)\n", buscaSequencialComparacao(vetor, tamanho, vetor[tamanho - 1]));
    printf("\n- Binaria melhor caso (elemento do meio): %d interacoes - O(1)\n", buscaBinariaComparacao(vetor, tamanho, vetor[tamanho / 2 - 1]));
    printf("- Binaria pior caso (elemento nao existe): %d interacoes - O(log de n na base 2)\n", buscaBinariaComparacao(vetor, tamanho, -1));

    return 0;
}

