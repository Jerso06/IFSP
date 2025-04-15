#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    if(valor>=0){
        if(valor%2==0){
            printf("Valor par");
        }else{
            printf("Valor impar");
        }
    }else{
        printf("Valor precisa ser positivo!");
    }
    return 0;
}
