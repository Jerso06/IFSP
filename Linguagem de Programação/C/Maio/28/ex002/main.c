#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} Coordenadas;

int main()
{
    Coordenadas c1, c2;
    double distancia;

    printf("Informe o X do ponto: ");
    scanf("%d", &c1.x);
    printf("Informe o Y do ponto: ");
    scanf("%d", &c1.y);
    distancia = sqrt(pow((double)c1.x, 2)+(pow((double)c1.y,2)));
    printf("distancia da origem: %.2f",distancia);
    return 0;
}
