#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[128];
    char esporte[128];
    int idade;
    float altura;
} Atleta;

int main()
{
    Atleta at1, at2;

    printf("Informe o nome do primeiro atleta: ");
    scanf(" %129[^\n]", at1.nome);
    printf("Informe o esporte do primeiro atleta: ");
    scanf(" %129[^\n]", at1.esporte);
    printf("Informe a idade do primeiro atleta: ");
    scanf("%d", &at1.idade);
    printf("Informe a altura do primeiro atleta: ");
    scanf("%f", &at1.altura);
    printf("Informe o nome do segundo atleta: ");
    scanf(" %129[^\n]", at2.nome);
    printf("Informe o esporte do segundo atleta: ");
    scanf(" %129[^\n]", at2.esporte);
    printf("Informe a idade do segundo atleta: ");
    scanf("%d", &at2.idade);
    printf("Informe a altura do segundo atleta: ");
    scanf("%f", &at2.altura);

    if(at1.altura>at2.altura){
        printf("\nNome do mais alto: %s",at1.nome);
    }else{
        printf("\nNome do mais alto: %s",at2.nome);
    }

    if(at1.idade>at2.idade){
        printf("\nEsporte do mais velho: %s",at1.esporte);
    }else{
        printf("\nEsporte do mais velho: %s",at2.esporte);
    }
    return 0;
}
