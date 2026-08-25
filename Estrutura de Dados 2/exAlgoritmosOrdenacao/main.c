#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void bubbleSort(int vet[], int tamanho){
    int trocou;

    for(int i = 0; i < tamanho - 1; i++){
        trocou = 0;

        for(int j = 0; j < tamanho - 1 - i; j++){ // tamanho - 1 - i pois a cada iteração o último elemento já está correto
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

void insertSort(int vet[], int tamanho){
    for(int i = 1; i < tamanho; i++){
        int pos = vet[i];
        int j = i - 1;
        while(j >= 0 && vet[j] > pos){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = pos;
    }
}

void selectionSort(int vet[], int tamanho){
    for(int i = 0; i < tamanho - 1; i++){
        int indexMenor = i;
        for(int j = i + 1; j < tamanho; j++){
                if(vet[j] < vet[indexMenor]){
                    indexMenor = j;
                }
        }
        int aux = vet[indexMenor];
        vet[indexMenor] = vet[i];
        vet[i] = aux;
    }
}

void merge(int vet[], int esquerda, int meio, int direita){
    int i, j, k;
    int n1 = meio - esquerda + 1, n2 = direita - meio;
    int e[n1], d[n2];

    for(i = 0; i < n1; i++){
        e[i] = vet[esquerda+1];
    }
    for(j = 0; j < n2; j++){
        d[j] = vet[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = esquerda;

    while (i < n1 && j < n2) {
        if (e[i] <= d[j]) {
            vet[k] = e[i];
            i++;
        } else {
            vet[k] = d[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vet[k] = e[i];
        i++;
        k++;
    }
    while (j < n2) {
        vet[k] = d[j];
        j++;
        k++;
    }
}

void mergeSort(int vet[], int esquerda, int direita){
    if(esquerda < direita){
        int meio = esquerda + (direita - esquerda) / 2;

        mergeSort(vet, esquerda, meio); //ordena o lado esquerdo da lista

        mergeSort(vet, meio, direita); //ordena o lado direito da lista

        merge(vet, esquerda, meio, direita); //une as metades ordenandas
    }
}

int partition(int vet[], int menor, int maior){
    int pivo = vet[maior], i = menor - 1;
    for (int j = menor; j < maior; j++) {
        if (vet[j] < pivo) {
            i++;
            int t = vet[i];
            vet[i] = vet[j];
            vet[j] = t;
        }
    }
    int t = vet[i + 1];
    vet[i + 1] = vet[maior];
    vet[maior] = t;

    return i + 1;
}

void quickSort(int vet[], int menor, int maior){
    if(menor < maior){
        int pivo = partition(vet, menor, maior);
        quickSort(vet, menor, pivo - 1);
        quickSort(vet, pivo + 1, maior);
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

    return 0;
}
