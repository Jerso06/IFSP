#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[50], caracter, str2[50];
    int cont=0;

    printf("Informe um texto: ");
    gets(str1);
    printf("Informe um caracter: ");
    scanf(" %c",&caracter);

    for(int i=0;i<strlen(str1);i++){
        if(str1[i] != caracter){
            str2[cont]=str1[i];
            cont++;
        }
    }

    puts(str2);
    return 0;
}
