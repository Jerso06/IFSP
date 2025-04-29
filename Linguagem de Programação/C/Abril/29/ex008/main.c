#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menor, valor;

    for(int i=0;i<5;i++){
        printf("Informe um valor: ");
        scanf("%d", &valor);
        if(i==0){
            menor = valor;
        }else{
            if(valor<menor){
                menor = valor;
            }
        }
    }
    printf("Menor valor: %d",menor);
    return 0;
}
