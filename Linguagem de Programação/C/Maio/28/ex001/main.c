#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[128];
    int idade;
    float peso;
}Pessoa;

int main()
{
    Pessoa p1 = {"Jose", 30, 88.5},p2 = {"Mario", 24, 69},p3 = {"Rose", 45, 65};

    printf("Pessoa 1: \nNome: %s \nIdade: %d \nPeso: %.2f\n",p1.nome,p1.idade,p1.peso);
    printf("\nPessoa 2: \nNome: %s \nIdade: %d \nPeso: %.2f\n",p2.nome,p2.idade,p2.peso);
    printf("\nPessoa 3: \nNome: %s \nIdade: %d \nPeso: %.2f\n",p3.nome,p3.idade,p3.peso);
    return 0;
}
