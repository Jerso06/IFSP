#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, idadeH, idadeM, contH=0, contM=0, contG=0;
    double salario, salarioM=0, salarioH=0, salarioG=0;
    char sexo;

    for(int i=0;i<10;i++){
        printf("Informe a sua idade: ");
        scanf("%d", &idade);
        printf("Informe o seu sexo (F/M): ");
        scanf(" %c", &sexo);
        printf("Informe o seu salario: ");
        scanf("%lf", &salario);
        salarioG+=salario;
        contG++;
        if(sexo=='F'){
            contM++;
            salarioM+=salario;
            if(i==0){
                idadeM = idade;
            }else{
                if(idade<idadeM){
                    idadeM = idade;
                }
            }
        }else if(sexo=='M'){
            contH++;
            salarioH+=salario;
            if(i==0){
                idadeH = idade;
            }else{
                if(idade>idadeH){
                    idadeH = idade;
                }
            }
        }
        printf("\n");
    }

    printf("Media de salario dos homens: %.2f",(salarioH/contH));
    printf("\nMedia de salario das mulheres: %.2f", (salarioM/contM));
    printf("\nMedia de salario geral: %.2f", (salarioG/contG));
    printf("\nIdade do homem mais velho: %d", idadeH);
    printf("\nIdade da mulher mais nova: %d", idadeM);

    return 0;
}
