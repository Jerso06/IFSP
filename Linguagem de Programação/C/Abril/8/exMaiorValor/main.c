#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Informe um valor: ");
    scanf("%d", &n1);
    printf("Informe outro valor: ");
    scanf("%d", &n2);
    if(n1>=n2){
        printf("Maior valor: %d",n1);
    }else{
        printf("Maior valor: %d",n2);
    }
    return 0;
}
