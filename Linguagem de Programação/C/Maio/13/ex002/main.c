#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[8], x, y, soma;

    for(int i=0;i<8;i++){
        printf("Informe o %d valor: ", i+1);
        scanf("%d", &valores[i]);
    }

    printf("Informe uma das 8 posicoes do vetor: ");
    scanf("%d", &x);
    soma = valores[x-1];
    printf("Informe outra das 8 posicoes do vetor: ");
    scanf("%d", &y);
    soma += valores[y-1];
    printf("Soma dos valores de tais posicoes: %d", soma);
    return 0;
}
