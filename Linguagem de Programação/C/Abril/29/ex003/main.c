#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, cont=0;

    printf("Informe quantos valores pares queres: ");
    scanf("%d", &valor);
    for(int i=0;i<valor;i++){
        if(i!=valor-1){
            printf("%d, ", cont);
            cont+=2;
        }else{
            printf("%d.",cont);
        }
    }
    return 0;
}
