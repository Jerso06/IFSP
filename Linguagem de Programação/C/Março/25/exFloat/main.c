#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, result;

    printf("Informe o primeiro valor: ");
    scanf("%f", &n1);
    printf("Informe o segundo valor: ");
    scanf("%f", &n2);
    result = n1/n2;
    printf("Resultado da divisao: %.1f",result);
    return 0;
}
