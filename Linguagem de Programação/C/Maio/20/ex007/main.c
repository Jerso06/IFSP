#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[50], texto2[50], caracter;

    printf("Informe um texto: ");
    gets(texto);
    printf("Informe um caracter: ");
    scanf(" %c", &caracter);

    for(int i=0; i<strlen(texto); i++){
        if(strcmp(texto[i], caracter) != 0){
            texto2[i]=texto[i];
        }
    }
    printf("%s",texto);
    return 0;
}
