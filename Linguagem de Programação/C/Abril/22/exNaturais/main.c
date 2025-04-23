#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont=0;

    printf("Informe um valor: ");
    scanf("%d", &n);
    while(cont<=n){
        printf("%d, ", cont);
        cont++;
    }
    return 0;
}
