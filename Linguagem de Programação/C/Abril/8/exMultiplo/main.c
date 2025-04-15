#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &n1);
    printf("Informe o segundo valor: ");
    scanf("%d", &n2);
    if(n1>=0 && n2>=0){
        if(n1%n2==0){
            printf("%d e multiplo de %d",n1,n2);
        }else{
            printf("%d nao e multiplo de %d",n1,n2);
        }
    }else{
        printf("Valor negativo detectado!");
    }
    return 0;
}
