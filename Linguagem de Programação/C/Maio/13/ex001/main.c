#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[100], cont=0;

    for(int i = 1; cont<100; i++){
        if(i%7==0){
            valores[cont] = i;
            cont++;
        }
    }
    printf("100 primeiros multiplos de 7: ");
    for(int j = 0; j<100; j++){
        printf("%d, ", valores[j]);
    }
    return 0;
}
