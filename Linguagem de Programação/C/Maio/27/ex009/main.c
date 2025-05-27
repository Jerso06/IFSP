#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matrizA[3][3], matrizB[3][3], matrizC[3][3];
    int contA=1, contB=1;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Informe o %d valor da matriz A: ",contA);
            scanf("%f", &matrizA[i][j]);
            contA++;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Informe o %d valor da matriz B: ",contB);
            scanf("%f", &matrizB[i][j]);
            contB++;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrizC[i][j] = matrizA[i][j]+matrizB[i][j];
        }
    }

    printf("Matriz A: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%.2f], ",matrizA[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%.2f], ",matrizB[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%.2f], ",matrizC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
