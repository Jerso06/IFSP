#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoNasc, anoAtual;

    printf("Informe o ano do seu Nascimento: ");
    scanf("%d",&anoNasc);
    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Voce tem %d anos e fara %d anos em 2050",anoAtual-anoNasc,2050-anoNasc);
    return 0;
}
