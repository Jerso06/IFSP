#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, aumento;

    printf("Informe o seu salario: ");
    scanf("%lf", &salario);
    if(salario>0){
        if(salario<500){
            aumento = salario*0.05;
            salario*=1.05;
            printf("Aumento: %.2f \nSalario com aumento: %.2f",aumento,salario);
        }else if(salario>=500 && salario<=850){
            aumento = salario*0.1;
            salario*=1.1;
            printf("Aumento: %.2f \nSalario com aumento: %.2f",aumento,salario);
        }else{
            aumento = salario*0.15;
            salario*=1.15;
            printf("Aumento: %.2f \nSalario com aumento: %.2f",aumento,salario);
        }
    }else{
        printf("Salario invalido!");
    }
    return 0;
}
