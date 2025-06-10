#include <stdio.h>
#include <stdlib.h>

void mostra(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    mostra(valor);
    return 0;
}
