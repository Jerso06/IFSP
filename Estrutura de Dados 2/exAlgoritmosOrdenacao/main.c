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
        e[i] = vet[esquerda+i];
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
        int meio = (direita + esquerda) / 2;

        mergeSort(vet, esquerda, meio); //ordena o lado esquerdo da lista

        mergeSort(vet, meio + 1, direita); //ordena o lado direito da lista

        merge(vet, esquerda, meio, direita); //une as metades ordenandas
    }
}

void quickSort(int arr[], int inicio, int fim) {
    int i = inicio;
    int j = fim;

    // Escolhe o elemento do meio exato como pivô
    int pivo = arr[fim];

    // Partição usando a estratégia de Hoare
    while (i <= j) {
        // Encontra elemento à esquerda que deve ir para a direita
        while (arr[i] < pivo) {
            i++;
        }
        // Encontra elemento à direita que deve ir para a esquerda
        while (arr[j] > pivo) {
            j--;
        }
        // Troca os elementos de posição se os ponteiros não se cruzaram
        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    // Chamadas recursivas para as subdivisões
    if (inicio < j) {
        quickSort(arr, inicio, j);
    }
    if (i < fim) {
        quickSort(arr, i, fim);
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
    int vetorBubble[10], vetorInsert[10], vetorMerge[10], vetorSelection[10], vetorQuick[10] ={13, 4, 39, 2, 25, 8, 21, 1, 7, 44};
    int tamanho = 10;
    int valor;
    int pos;

    srand(time(NULL));

    for(int i = 0; i < tamanho; i++){
        vetorBubble[i] = (rand() % 100) + 1;
    }
    for(int i = 0; i < tamanho; i++){
        vetorInsert[i] = (rand() % 100) + 1;
    }
    for(int i = 0; i < tamanho; i++){
        vetorMerge[i] = (rand() % 100) + 1;
    }
    for(int i = 0; i < tamanho; i++){
        vetorSelection[i] = (rand() % 100) + 1;
    }
    for(int i = 0; i < tamanho; i++){
        vetorQuick[i] = (rand() % 100) + 1;
    }

    //bubble sort
    printf("VetorBubble:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorBubble[i]);
    }
    printf("\n\n");

    bubbleSort(vetorBubble, 10);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorBubble[i]);
    }
    printf("\n\n");

    //insert sort
    printf("VetorInsert:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorInsert[i]);
    }
    printf("\n\n");

    insertSort(vetorInsert, 10);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorInsert[i]);
    }
    printf("\n\n");

    //merge
    printf("VetorMerge:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorMerge[i]);
    }
    printf("\n\n");

    mergeSort(vetorMerge, 0, tamanho - 1);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorMerge[i]);
    }
    printf("\n\n");

    //selection
    printf("VetorSelection:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorSelection[i]);
    }
    printf("\n\n");

    selectionSort(vetorSelection, 10);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorSelection[i]);
    }
    printf("\n\n");

    //quick
    printf("VetorQuick:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorQuick[i]);
    }
    printf("\n\n");

    quickSort(vetorQuick, 0, tamanho - 1);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorQuick[i]);
    }
    printf("\n\n");

    return 0;
}
