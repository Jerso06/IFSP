#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;
    int qtd;

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);
    printf("Informe a quantidade vendida: ");
    scanf("%d",&qtd);

    if(preco<30 || qtd<500){
        preco = preco*1.1;
        printf("Novo valor do produto: %.2f",preco);
    }else if(preco>=30 && preco<80 || qtd>=500 && qtd<1200){
        preco = preco*1.15;
        printf("Novo valor do produto: %.2f",preco);
    }else{
        preco = preco*0.8;
        printf("Novo valor do produto: %.2f",preco);
    }
    return 0;
}
