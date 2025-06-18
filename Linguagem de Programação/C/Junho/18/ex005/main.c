#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular(float c, float l, float a){
    return(sqrt(pow(c, 2)+ pow(l, 2)+ pow(a, 2)));
}

int main()
{
    float comprimento, largura, altura, diagonal;

    printf("Informe o comprimento: ");
    scanf("%f", &comprimento);
    printf("Informe a largura: ");
    scanf("%f", &largura);
    printf("Informe a altura: ");
    scanf("%f", &altura);
    diagonal = calcular(comprimento, largura, altura);
    printf("Diagonal: %.2f", diagonal);
    return 0;
}
