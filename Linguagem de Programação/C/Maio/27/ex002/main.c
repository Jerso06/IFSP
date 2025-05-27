#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4], maior, cont=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Informe o %d valor: ",cont+1);
            scanf("%d", &matriz[i][j]);
            if(i==0 && j==0){
                maior = matriz[i][j];
            }else if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
            cont++;
        }
    }

    printf("Maior valor: %d \nesta na posicao: ",maior);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matriz[i][j]==maior){
                printf("(%d,%d)",i,j);
            }
        }
    }
    return 0;
}
