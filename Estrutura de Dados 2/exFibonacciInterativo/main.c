#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n;
    printf("Informe o indice de fibonacci que gostaria de saber: ");
    scanf("%d", &n);

    printf("Fibo(%d): ", n);

    long soma = 0;
    long marcador = 0, aux = 0;
    for(int i = 0; i <= n; i++){
        if(i == 1){
            soma += 1;
        }else{
            aux = soma;
            soma = soma+marcador;
            marcador = aux;
        }
        printf("[%d] ", soma);
    }

    return 0;
}
