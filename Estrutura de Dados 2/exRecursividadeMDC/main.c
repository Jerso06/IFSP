#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y){
    if(x == 0){
        return y;
    }else if(y == 0){
        return x;
    }

    return mdc(y, x%y);
}

int main()
{
    int n1, n2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &n1);
    printf("Informe o segundo valor: ");
    scanf("%d", &n2);
    printf("MDC de %d e %d eh igual a: %d", n1, n2, mdc(n1,n2));
    return 0;
}
