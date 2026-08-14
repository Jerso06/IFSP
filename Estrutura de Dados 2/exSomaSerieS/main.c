#include <stdio.h>
#include <stdlib.h>

float somaSerie(float n){
    if(n == 1){
        return 2;
    }

    return ((1+n*n)/n) + somaSerie(n - 1);
}

int main()
{
    float n;

    printf("Informe um valor: ");
    scanf("%f", &n);

    printf("Valor da soma em serie: %f", somaSerie(n));
    return 0;
}
