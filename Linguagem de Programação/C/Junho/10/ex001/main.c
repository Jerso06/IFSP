#include <stdio.h>
#include <stdlib.h>

void data(int dia, int mes, int ano){
    char meses[12][20] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("Data de hoje: %d de %s de %d",dia,meses[mes-1],ano);
}

int main()
{
    int dia, mes, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);
    data(dia, mes, ano);
    return 0;
}
