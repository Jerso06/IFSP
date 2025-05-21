#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maiorIndex, vet[10] = {6, 6, 3, 4, 5, 6, 3, 2, 6, 6}, cont=0;

    for(int i = 0; i<10; i++){
        if(i==0){
            maiorIndex = 0;
        }else if(vet[i]>vet[maiorIndex]){
            maiorIndex = i;
        }
    }

    for(int i = 0; i<10; i++){
        if(vet[i]==vet[maiorIndex]){
            cont++;
        }
    }

    printf("Maior valor: %d \nQuantas vezes ele repetiu: %d",vet[maiorIndex], cont);
    return 0;
}
