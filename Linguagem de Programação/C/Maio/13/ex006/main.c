#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], vetorCopia[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i<10; i++){
        printf("Informe o %d valor: ", i+1);
        scanf("%d", &vetor[i]);

        for(int j = 0;j<i;j++){
            if(vetor[j]==vetor[i]){
                vetorCopia[i] = vetor[i];
            }
        }
    }
    printf("Valores repetidos: ");
    for(int i=0;i<10;i++){
        if(vetorCopia[i]!=0){
            printf("%d, ",vetorCopia[i]);
        }
    }
    return 0;
}
