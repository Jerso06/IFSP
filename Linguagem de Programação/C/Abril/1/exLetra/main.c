#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Informe uma letra minuscula: ");
    scanf(" %c",&letra);
    printf("Letra em maiusculo: %c",letra-32);
    return 0;
}
