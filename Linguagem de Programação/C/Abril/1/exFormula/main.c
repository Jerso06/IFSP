#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n1, n2, value;

    printf("Informe o primeiro valor: ");
    scanf("%lf", &n1);
    printf("Informe o segundo valor: ");
    scanf("%lf", &n2);
    value = pow(n1,2) +pow(n2, 3) + 1;
    printf("Valor da fórmula: %.2f",value);
    return 0;
}
