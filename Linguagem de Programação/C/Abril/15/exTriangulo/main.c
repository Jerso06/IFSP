#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1, l2, l3;

    printf("Informe os 3 valores: ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1){
        if(l1==l2 && l1==l3){
            printf("Triangulo Equilatero");
        }else if(l1==l2 || l1==l3 || l2==l3){
            printf("Triangulo Isoceles");
        }else{
            printf("Triangulo Escaleno");
        }
    }else{
        printf("Triangulo impossivel");
    }
    return 0;
}
