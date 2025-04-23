#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0, soma=0, n;

    while(soma<100){
        printf("Informe um valor: ");
        scanf("%d", &n);
        soma+=n;
        cont++;
    }
    printf("Resultado da soma: %d \nQuantidade de valores necessarios: %d",soma,cont);
    return 0;
}
