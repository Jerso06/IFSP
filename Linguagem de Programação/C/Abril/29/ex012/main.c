#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, cont50 = 0, cont20 = 0, cont40 = 0, porcentagem;
    double altura, peso, soma=0;

    for(int i=0;i<10;i++){
        printf("Infomre a idade da %d pessoa: ",i+1);
        scanf("%d", &idade);
        printf("Infomre a altura da %d pessoa: ",i+1);
        scanf("%lf", &altura);
        printf("Infomre o peso da %d pessoa: ",i+1);
        scanf("%lf", &peso);
        printf("\n");
        //if relacionado a idade
        if(idade>=10 && idade<=20){
            soma+=altura;
            cont20++;
        }else if(idade>50){
            cont50++;
        }
        //if relacionado a peso
        if(peso<40){
            cont40++;
        }
    }
    porcentagem = (cont40*100)/10;
    printf("Quantidade de pessoas com idade>50: %d",cont50);
    printf("\nMedia altura das pessoas entre 10 e 20 anos: %.2f",soma/cont20);
    printf("\nPorcentagem de pessoas com peso<40: %d%%",porcentagem);
    return 0;
}
