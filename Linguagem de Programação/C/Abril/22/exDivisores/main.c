#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, divisor=1;

    printf("Informe um valor positivo: ");
    scanf("%d", &valor);
    printf("Divisores de %d: ",valor);
    while(divisor<=valor){
        if(valor%divisor==0){
            printf("%d, ",divisor);
        }
        divisor++;
    }
    return 0;
}
