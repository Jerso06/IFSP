#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];

    for(int i=0;i<10;i++){
        printf("Informe o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
        for(int j = 0; j<i;j++){
            while(vetor[j] == vetor[i]){
                printf("Informe um valor que nao foi usado: ");
                scanf("%d", &vetor[i]);
                j=-1;
            }
        }
    }

    printf("Vetor: ");
    for(int i = 0; i<10; i++){
        printf("%d, ", vetor[i]);
    }
    return 0;
}
