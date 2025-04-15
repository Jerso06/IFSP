#include <stdio.h>
#include <stdlib.h>

int main()
{
    float carro, percentualIm, percentualDis, valorF;

    printf("Informe o valor do carro: ");
    scanf("%f",&carro);
    printf("Informe o percentual da distribuidora: ");
    scanf("%f",&percentualDis);
    printf("Informe o percentual dos impostos: ");
    scanf("%f",&percentualIm);
    valorF = carro+(carro*(percentualDis/100)+carro*(percentualIm/100));
    printf("Lucro do distribuidor: %.2f \nValor impostos: %.2f \nValor final do veiculo: %.2f",carro*(percentualDis/100),carro*(percentualIm/100),valorF);
    return 0;
}
