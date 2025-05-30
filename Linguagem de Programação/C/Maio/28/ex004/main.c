#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int horas;
    int minutos;
} Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    Horario hora;
    Data data;
    char compro[128];
} Compromisso;

int main()
{
    Compromisso cmp;

    printf("Informe as horas: ");
    scanf("%d", &cmp.hora.horas);
    printf("Informe os minutos: ");
    scanf("%d", &cmp.hora.minutos);
    printf("Informe a data (dia/mes/ano): ");
    scanf("%d/%d/%d", &cmp.data.dia,&cmp.data.mes,&cmp.data.ano);
    printf("Informe o compromisso: ");
    scanf(" %129[^\n]", &cmp.compro);
    printf("\nHorario: %d:%d \nData: %d/%d/%d \nCompromisso: %s",cmp.hora.horas,cmp.hora.minutos,cmp.data.dia,cmp.data.mes,cmp.data.ano, cmp.compro);
    return 0;
}
