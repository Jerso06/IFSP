#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[129];
    int tamanho, cont=0;

    printf("Informe um texto: ");
    scanf(" %129[^\n]", texto);
    tamanho = strlen(texto);

    printf("Ultimos 3 caracteres: ");
    for(int i=tamanho-3;i<tamanho;i++){
        printf("%c",texto[i]);
    }

    printf("\nTamanho da string: %d",tamanho);

    for(int i=0;i<tamanho;i++){
        if(texto[i]!=' '){
            cont++;
        }
    }
    printf("\nTamanho sem espaços: %d",cont);
    return 0;
}
