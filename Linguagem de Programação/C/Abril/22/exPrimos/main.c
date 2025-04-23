#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, cont=1, divisores=0;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    while(cont<=valor){
        if(valor%cont==0){
            divisores++;
        }
        cont++;
    }
    if(divisores==2){
        printf("Valor primo.");
    }else{
        printf("Valor nao primo.");
    }
    return 0;
}
