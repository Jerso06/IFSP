#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Informe um valor positivo: ");
    scanf("%d", &n);
    while(n>=0){
        printf("%d, ", n);
        n--;
    }
    return 0;
}
