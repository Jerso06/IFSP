#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3], soma=0, cont=1;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Informe o %d valor: ",cont);
            scanf("%d", &matriz[i][j]);
            if(j==3-i-1){
                soma+=matriz[i][j];
            }
            cont++;
        }
    }

    printf("Soma diagonal secundaria: %d\n",soma);
    return 0;
}
