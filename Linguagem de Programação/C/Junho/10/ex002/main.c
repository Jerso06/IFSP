#include <stdio.h>
#include <stdlib.h>

float converte(float graus){
    return (graus-32)*(5.0/9.0);
}

int main()
{
    float grausF, grausC;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &grausF);
    grausC = converte(grausF);
    printf("%.2f equivale a %.2f em Celsius.",grausF, grausC);
    return 0;
}
