#include <stdio.h>
#include <stdlib.h>

float definePeso(float alt, char sex){
    if(sex=='M' || sex=='m'){
        return 72.7*alt-58;
    }else if(sex=='F' || sex=='f'){
        return 62.1*alt-44.7;
    }
}

int main()
{
    float altura, pesoIdeal;
    char sexo;

    printf("Informe a sua altura: ");
    scanf("%f", &altura);
    printf("Informe o seu sexo (M ou F): ");
    scanf(" %c", &sexo);
    pesoIdeal = definePeso(altura, sexo);
    printf("Seu peso ideal: %.2f",pesoIdeal);
    return 0;
}
