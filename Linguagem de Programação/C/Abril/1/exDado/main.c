#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4;

    srand(time(NULL));

    n1 = 1 + rand() % (6 - 1 + 1);
    n2 = 1 + rand() % (6 - 1 + 1);
    n3 = 1 + rand() % (6 - 1 + 1);
    n4 = 1 + rand() % (6 - 1 + 1);

    printf("N�mero do Primeiro lan�amento: %d \nNumero do segundo lan�amento: %d \nNumero do terceiro lan�amento: %d \nNumero do quarto lan�amento: %d \n",n1,n2,n3,n4);
    return 0;
}
