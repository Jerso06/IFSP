#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char textoOg[20] = "Primeiro ano info", textoCopy[20];

    printf("Informe um texto de entrada: ");
    gets(textoCopy);
    strcpy(textoOg, textoCopy);

    for(int i=strlen(textoOg);i>=0;i--){
        printf("%c",textoOg[i]);
    }
    return 0;
}
