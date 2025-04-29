#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior, valor;

    for(int i=0;i<5;i++){
        printf("Informe um valor: ");
        scanf("%d", &valor);
        if(i==0){
            maior = valor;
        }else{
            if(valor>maior){
                maior = valor;
            }
        }
    }
    printf("Maior valor: %d",maior);
    return 0;
}
