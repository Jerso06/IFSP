#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3], cont=1, contMatriz=0, valor;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Informe o %d valor: ", cont);
            scanf("%d", &matriz[i][j]);
            cont++;
        }
    }
    printf("\nMatriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%d], ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nValores abaixo da diagonal secundaria: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i+j>2){
                printf("[%d], ",matriz[i][j]);
            }
        }
    }

    printf("\n\nInforme o valor de busca: ");
    scanf("%d", &valor);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(valor==matriz[i][j]){
                contMatriz++;
            }
        }
    }
    printf("O valor aparece %d vezes na matriz", contMatriz);
    return 0;
}
