#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma=0;
    int valor;

    for(int i=0;i<10;i++){
        printf("Informe o %d valor: ",i+1);
        scanf("%d", &valor);
        soma+=valor;
    }
    printf("Media: %.2f",(soma/10));
    return 0;
}
