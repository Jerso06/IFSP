#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    printf("Informe o seu salario: ");
    scanf("%f", &salario);
    if(salario>0){
        if(salario<=500){
            salario = salario*1.05+150;
            printf("Novo salario + auxilio: %.2f",salario);
        }else if(salario>500 && salario<=1200){
            if(salario<=600){
                salario = salario*1.12+150;
                printf("Novo salario + auxilio: %.2f",salario);
            }else{
                salario = salario*1.12+100;
                printf("Novo salario + auxilio: %.2f",salario);
            }
        }else{
            salario += 100;
            printf("Novo salario + auxilio: %.2f",salario);
        }
    }else{
        printf("Salario invalido!");
    }
    return 0;
}
