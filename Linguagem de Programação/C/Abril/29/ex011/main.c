#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, valorSave, cont=0;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    valorSave = valor;
    for(int i=1;valor>0;i+=2){
        if(valor>0){
            valor-=i;
            cont++;
        }
    }
    if(valor==0){
        printf("Raiz quadrada de %d e: %d",valorSave,cont);
    }else{
        printf("Nao ha raiz quadrada exata!");
    }
    return 0;
}
