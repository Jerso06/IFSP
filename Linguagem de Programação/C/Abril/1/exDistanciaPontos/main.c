#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double xa,xb,ya,yb,distancia;

    printf("Informe as coordenadas do A: ");
    scanf("%lf %lf",&xa,&ya);
    printf("Informe as coordenadas do B: ");
    scanf("%lf %lf",&xb,&yb);
    distancia = sqrt(pow((xb-xa),2) + pow((yb-ya),2));
    printf("A distancia entre os pontos é igual a: %f",distancia);
    return 0;
}
