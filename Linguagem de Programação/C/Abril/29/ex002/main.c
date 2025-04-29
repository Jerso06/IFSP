#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    for(int i=valor;i>0;i--){
        if(i!=1){
            printf("%d, ", i);
        }else{
            printf("%d.", i);
        }

    }
    return 0;
}
