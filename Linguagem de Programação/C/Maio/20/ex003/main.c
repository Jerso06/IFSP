#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[50];
    int cont=0;

    printf("Informe um texto: ");
    gets(texto);

    while(texto[cont] != '\0'){
        cont++;
    }

    printf("Quantidade de caracteres = %d",cont);
    return 0;
}
