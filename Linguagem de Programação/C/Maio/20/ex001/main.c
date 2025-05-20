#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[20];

    printf("Informe o texto de entrada: ");
    gets(texto);

    for(int i=strlen(texto);i>=0;i--){
        printf("%c",texto[i]);
    }
    return 0;
}
