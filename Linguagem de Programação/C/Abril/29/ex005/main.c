#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0, valor;
    for(int i=0;i<10;i++){
        printf("Informe o %d valor: ",i+1);
        scanf("%d", &valor);
        soma+=valor;
    }
    printf("Soma total: %d", soma);
    return 0;
}
