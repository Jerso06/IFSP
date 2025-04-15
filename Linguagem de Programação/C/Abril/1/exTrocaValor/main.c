#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,aux;

    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("Valores trocados \nA: %d \nB: %d",a,b);
    return 0;
}
