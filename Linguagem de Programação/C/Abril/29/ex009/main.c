#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, cont=0;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    for(int i=1;i<=valor;i++){
        if(valor%i==0){
            cont++;
        }
    }

    if(cont==2){
        printf("Valor e primo!");
    }else{
        printf("Valor nao e primo!");
    }

    return 0;
}
