#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, menor=0, maior=0, cont=0;
    do{
        printf("Informe um valor: ");
        scanf("%d",&valor);
        if(valor>=0){
            if(cont==0){
                menor = valor;
                maior = valor;
                cont++;
            }else{
                if(valor>maior){
                    maior = valor;
                }else if(valor<menor){
                    menor = valor;
                }
            }
        }
    }while(valor>=0);
    printf("Maior valor: %d \nMenor valor: %d",maior,menor);
    return 0;
}
