#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    for(int i=0;i<=valor;i++){
        if(i%2!=0){
            if(i!=valor){
                printf("%d, ",i);
            }else{
                printf("%d.",i);
            }
        }
    }
    return 0;
}
