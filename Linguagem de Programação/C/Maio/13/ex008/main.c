#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[8], vetorB[8], vetorC[8], cont=0, contVetor=0;

    printf("Vetor 1: \n");
    for(int i=0;i<8;i++){
        printf("Informe o %d valor: ",i+1);
        scanf("%d", &vetorA[i]);
    }
    printf("Vetor 2: \n");
    for(int i=0;i<8;i++){
        printf("Informe o %d valor: ",i+1);
        scanf("%d", &vetorB[i]);
    }

    for(int i=0;i<8;i++){
        cont=0;
        for(int j=0;j<8;j++){
            if(vetorA[i]==vetorB[j]){
                cont++;
            }
        }
        if(cont==0){
            vetorC[contVetor]= vetorA[i];
            contVetor++;
        }
    }

    printf("Valores que nao repetiram: ");
    for(int i=0;i<contVetor;i++){
        printf("%d, ", vetorC[i]);
    }
    return 0;
}
