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

    printf("Número do Primeiro lançamento: %d \nNumero do segundo lançamento: %d \nNumero do terceiro lançamento: %d \nNumero do quarto lançamento: %d \n",n1,n2,n3,n4);
    return 0;
}
