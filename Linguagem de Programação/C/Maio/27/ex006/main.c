#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][10];

    for(int i=0;i<4;i++){
        for(int j=0;j<10;j++){
            if(i==j){
                matriz[i][j] = i+j;
            }else if(i>j){
                matriz[i][j] = 2*i;
            }else if(i<j){
                matriz[i][j] = 2*j;
            }
        }
    }

    printf("Matriz final: \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<10;j++){
            printf("[%d], ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
