#include <stdio.h>
#include <stdlib.h>

int somaInteiros(int m, int n){
    if(n < m){
        return 0;
    }

    return n + somaInteiros(m, n-1);
}

int main()
{
    int n1, n2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &n1);
    printf("Informe o segundo valor: ");
    scanf("%d", &n2);

    printf("Soma de %d ate %d eh: %d", n1, n2, somaInteiros(n1, n2));
    return 0;
}
