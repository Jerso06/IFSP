#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, percentual;

    printf("Informe o seu salario: ");
    scanf("%f", &salario);
    printf("Informe o percentual de aumento: ");
    scanf("%f", &percentual);
    printf("Valor de aumento: %.2f \nSalario com aumento: %.2f",salario*(percentual/100),salario*(1+(percentual/100)));
    return 0;
}
