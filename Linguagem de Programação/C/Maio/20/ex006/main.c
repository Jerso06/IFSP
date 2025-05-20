#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[50];
    int vogal=0, qtdA=0, qtdE=0, qtdI=0, qtdO=0, qtdU=0;

    printf("Informe um texto: ");
    gets(texto);

    for(int i=0; i<strlen(texto); i++){
        if(texto[i] == 'a' || texto[i] == 'A'){
            vogal++;
            qtdA++;
        }else if(texto[i] == 'E' || texto[i] == 'e'){
            vogal++;
            qtdE++;
        }else if(texto[i] == 'i' || texto[i] == 'I'){
            vogal++;
            qtdI++;
        }else if(texto[i] == 'o' || texto[i] == 'O'){
            vogal++;
            qtdO++;
        }else if(texto[i] == 'u' || texto[i] == 'U'){
            vogal++;
            qtdU++;
        }
    }

    for(int i=0;i<4;i++){
        printf("%c", texto[i]);
    }
    printf("\nTem um total de %d vogais.",vogal);
    printf("\nTemos um total de: \n %d letras A \n %d letras E \n %d letras I \n %d letras O \n %d letras U \n",qtdA,qtdE,qtdI,qtdO,qtdU);
    return 0;
}
