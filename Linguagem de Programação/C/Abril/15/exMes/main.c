#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Informe um valor de 1 a 12: ");
    scanf("%d", &n);

    switch(n){
    case 1:
        printf("%d - Janeiro",n);
        break;
    case 2:
        printf("%d - Fevereiro",n);
        break;
    case 3:
        printf("%d - Março",n);
        break;
    case 4:
        printf("%d - Abril",n);
        break;
    case 5:
        printf("%d - Maio",n);
        break;
    case 6:
        printf("%d - Junho",n);
        break;
    case 7:
        printf("%d - Julho",n);
        break;
    case 8:
        printf("%d - Agosto",n);
        break;
    case 9:
        printf("%d - Setembro",n);
        break;
    case 10:
        printf("%d - Outubro",n);
        break;
    case 11:
        printf("%d - Novembro",n);
        break;
    case 12:
        printf("%d - Dezembro",n);
        break;
    default:
        printf("Entrada invalida");
    }
    return 0;
}
