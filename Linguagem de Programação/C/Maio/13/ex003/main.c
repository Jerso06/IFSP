#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeros[20], menorIndex;
    srand(time(NULL));

    for(int i=0;i<20;i++){
        numeros[i] = 1 + rand() % (100 - 1 + 1);
        if(i==0){
            menorIndex = 0;
        }else if(numeros[i]<numeros[menorIndex]){
            menorIndex = i;
        }
    }
    printf("Vetor: ");
    for(int i = 0; i<20; i++){
        printf("%d, ",numeros[i]);
    }
    printf("\nMenor elemento: %d \nEsta na %d posicao.",numeros[menorIndex], menorIndex+1);

    return 0;
}
