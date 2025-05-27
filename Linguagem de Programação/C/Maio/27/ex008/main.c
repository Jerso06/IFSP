#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont1=0, cont2=0, cont3=0;
    float matriz[10][3], menor[10];

    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            printf("Informe a %d nota do %d aluno: ",j+1,i+1);
            scanf("%f", &matriz[i][j]);
            if(j==0){
                menor[i] = matriz[i][j];
            }else if(matriz[i][j]<menor[i]){
                menor[i] = matriz[i][j];
            }
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            if(matriz[i][j]==menor[i]){
                if(j==0){
                    cont1++;
                }else if(j==1){
                    cont2++;
                }else{
                    cont3++;
                }
            }
        }
    }

    printf("\n%d alunos foram pior na primeira prova\n%d alunos foram pior na segunda prova\n%d alunos foram pior na terceira prova",cont1,cont2,cont3);
    return 0;
}
