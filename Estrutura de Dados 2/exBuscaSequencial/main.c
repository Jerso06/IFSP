#include <stdio.h>
#include <stdlib.h>

int buscaSequencial(int vet[], int tamanho, int valor){
    for(int i = 0; i < tamanho; i++){
        if(vet[i] == valor){
            return i;
        }
    }

    return -1;
}

int main()
{
    int vetor[20];
    int tamanho = 20;
    int val;
    int pos = -1;
    char opcao = 's';

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (rand() % 100) + 1;
    }

    printf("Vetor com 20 valores aleatorios:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    while(opcao == 's' || opcao == 'S'){
        printf("\nInforme o valor que deseja buscar: ");
        scanf("%d", &val);
        pos = buscaSequencial(vetor, tamanho, val);
        if(pos != -1){
            printf("\nO valor %d foi encontrado na posicao %d", val, pos + 1);
            break;
        }else{
            printf("\nValor nao encontrado.\nDeseja realizar outra busca? (s/n): ");
            scanf(" %c", &opcao);
        }
    }

    return 0;
}
