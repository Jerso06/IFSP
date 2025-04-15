#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926535
int main()
{
    double angulo, escada, parede;
    printf("Informe o angulo formado: ");
    scanf("%lf", &angulo);
    printf("Informe a altura da parede: ");
    scanf("%lf", &parede);
    angulo = PI * (angulo/180);
    escada = parede/sin(angulo);
    printf("O tamanho da escada é igual a: %.2f",escada);
    return 0;
}
