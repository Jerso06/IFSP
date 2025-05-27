#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char texto[50];

    printf("Informe um texto: ");
    gets(texto);
    for(int i=0;i<strlen(texto);i++){
        if(texto[i]>=97 && texto[i]<=122){
            texto[i]-=32;
        }
    }
    puts(texto);
    return 0;
}
