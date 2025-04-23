#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, cont=0;

    do{
        printf("Informe um valor: ");
        scanf("%d", &valor);
        if(valor>=100 && valor<=200){
            cont++;
        }
    }while(valor!=0);
    printf("Numero de valores entre 100 e 200: %d",cont);
    return 0;
}
