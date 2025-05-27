#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int matriz[5][7], cont=0;

    srand(time(NULL));

    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            matriz[i][j] = 1 + rand() % (15);
            if(matriz[i][j]>=5 && matriz[i][j]<=10){
                cont++;
            }
        }
    }

    printf("Matriz: \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            printf("[%d], ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nQuantidade de valores entre 5 e 10: %d\n",cont);
    return 0;
}
