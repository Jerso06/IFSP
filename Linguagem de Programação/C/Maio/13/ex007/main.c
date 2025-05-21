#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[10],vetor2[10], vetor3[20],cont=0;

    printf("Vetor 1: \n");
    for(int i=0;i<10;i++){
        printf("Informe o %d valor: ",i+1);
        scanf("%d", &vetor1[i]);
    }
    printf("Vetor 2: \n");
    for(int i=0;i<10;i++){
        printf("Informe o %d valor: ",i+1);
        scanf("%d", &vetor2[i]);
    }

    for(int i=0;i<20;i++){
        if(i%2==0){
            vetor3[i]=vetor1[cont];
        }else{
            vetor3[i]=vetor2[cont];
            cont++;
        }
    }

    printf("Vetor 3: ");
    for(int i=0;i<20;i++){
        printf("%d, ",vetor3[i]);
    }
    return 0;
}
