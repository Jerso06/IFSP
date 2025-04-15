#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operacao;
    float n1, n2;

    printf("[+]Adicao \n[-]Subtracao \n[*]Multiplicacao \n[/]Divisao \nOperacao escolhida: ");
    scanf(" %c", &operacao);
    printf("informe os valores para serem operados: ");
    scanf("%f %f",&n1,&n2);
    switch(operacao){
        case '+':
            printf("%.2f+%.2f=%.2f",n1,n2,n1+n2);
            break;
        case '-':
            printf("%.2f-%.2f=%.2f",n1,n2,n1-n2);
            break;
        case '*':
            printf("%.2f*%.2f=%.2f",n1,n2,n1*n2);
            break;
        case '/':
            printf("%.2f/%.2f=%.2f",n1,n2,n1/n2);
            break;
    }

    return 0;
}
