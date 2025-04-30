#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, soma=0;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    for(int i=1;i<valor*valor*valor;i+=2){
        soma+=i
    }
    return 0;
}
