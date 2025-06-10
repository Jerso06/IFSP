#include <stdio.h>
#include <stdlib.h>

int somador(int valor){
    int som;
    for(int i=1;i<=valor;i++){
        som+=i;
    }
    return som;
}

int main()
{
    int valor, soma;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    soma = somador(valor);
    printf("Soma total: %d",soma);
    return 0;
}
