#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[50];

    printf("Informe um texto: ");
    gets(texto);

    printf("String sem vogal: ");
    for(int i=0;i<strlen(texto);i++){
        if(texto[i]=='a' || texto[i]=='A' || texto[i]=='e' || texto[i]=='E' || texto[i]=='i' || texto[i]=='I' || texto[i]=='o' || texto[i]=='O' || texto[i]=='u' || texto[i]=='U'){
            continue;
        }else{
            printf("%c",texto[i]);
        }
    }
    return 0;
}
