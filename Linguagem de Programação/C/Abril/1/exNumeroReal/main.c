#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;

    printf("Informe um valor real: ");
    scanf("%f", &number);
    printf("Valor lido: %.2f \nParte inteira: %d \nParte fracionaria: %.2f", number, (int)number, number-(int)number);
    return 0;
}
