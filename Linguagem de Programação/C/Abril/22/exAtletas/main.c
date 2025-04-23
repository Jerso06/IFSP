#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior=0, menor=0;
    double altura;

    do{
        printf("Informe a altura do atleta: ");
        scanf("%lf", &altura);
        if(altura!=0){
            if(altura<1.900000){
                menor++;
            }else{
                maior++;
            }
        }
    }while(altura!=0);
    printf("Quantidade de Atletas com +/= de 1.9m: %d \nQuantidade de Atletas com - de 1.9m: %d",maior, menor);
    return 0;
}
