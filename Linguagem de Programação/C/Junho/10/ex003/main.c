#include <stdio.h>
#include <stdlib.h>

int converte(int h, int m, int s){
    return (h*3600)+(m*60)+s;
}

int main()
{
    int horas, minutos, segundos, valorF;

    printf("Informe a quantidade de horas: ");
    scanf("%d", &horas);
    printf("Informe a quantidade de minutos: ");
    scanf("%d", &minutos);
    printf("Informe a quantidade de segundos: ");
    scanf("%d", &segundos);
    valorF = converte(horas, minutos, segundos);
    printf("Tempo em segundos: %d",valorF);
    return 0;
}
