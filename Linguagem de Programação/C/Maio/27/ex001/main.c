#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3], maior, cont=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
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
    printf("Maior valor: %d", maior);
    return 0;
}
