#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, soma;


    printf("Informe um valor: ");
    scanf("%d", &n1);
    printf("Informe outro valor: ");
    scanf("%d", &n2);
    soma = n1 + n2;

    printf("O resultado de %d+%d é = %d",n1,n2,soma);
    return 0;
}
