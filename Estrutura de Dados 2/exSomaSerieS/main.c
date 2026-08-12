#include <stdio.h>
#include <stdlib.h>

int somaSerie(int n){
    if(n == 1){
        return 2;
    }

    return ((1+n*n)/n) + somaSerie(n - 1);
}

int main()
{
    int n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    printf("Valor da soma em serie: %d", somaSerie(n));
    return 0;
}
