#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    char nome[129];
    Data date;
    float valor;
} Venda;

int main()
{
    Venda compra;

    printf("Informe o nome do vendedor: ");
    scanf(" %129[^\n]", compra.nome);
    printf("Informe o dia da compra: ");
    scanf("%d", &compra.date.dia);
    printf("Informe o mes da compra: ");
    scanf("%d", &compra.date.mes);
    printf("Informe o ano da compra: ");
    scanf("%d", &compra.date.ano);
    printf("Informe o valor da compra: ");
    scanf("%f", &compra.valor);

    printf("\nDados da venda: \n");
    printf("Vendedor: %s \nData: %d/%d/%d \nValor: %.2f",compra.nome, compra.date.dia, compra.date.mes, compra.date.ano, compra.valor);
    return 0;
}
