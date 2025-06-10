#include <stdio.h>
#include <stdlib.h>

float calculadora(float v1, float v2, char sinal){
    switch(sinal){
    case '+':
        return v1+v2;
        break;
    case '-':
        return v1-v2;
        break;
    case '*':
        return v1*v2;
        break;
    case '/':
        return v1/v2;
        break;
    default:
        return 0;
    }
}

int main()
{
    float n1, n2, resultado;
    char simbolo;

    printf("Informe o primeiro valor: ");
    scanf("%f", &n1);
    printf("Informe o segundo valor: ");
    scanf("%f", &n2);
    printf("Informe o simbolo da equacao (+,-,*,/): ");
    scanf(" %c", &simbolo);
    resultado = calculadora(n1, n2, simbolo);
    printf("Resultado da operacao: %.2f", resultado);
    return 0;
}
