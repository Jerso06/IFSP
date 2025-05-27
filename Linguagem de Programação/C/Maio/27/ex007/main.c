#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3], cont=1, soma[3] = {0,0,0};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Informe o %d numero inteiro: ",cont);
            scanf("%d", &matriz[i][j]);
            cont++;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            soma[i]+=matriz[j][i];
        }
    }

    printf("Soma de cada coluna: \n");
    for(int i=0;i<3;i++){
        printf("Coluna %d: %d\n",i+1,soma[i]);
    }
    return 0;
}
