#include <stdio.h>
#include <stdlib.h>

long fibonacci(long n){
    if(n == 0){
        return 0;
    }else if(n == 1){

        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    long n;
    printf("Informe o indice de fibonacci que gostaria de saber: ");
    scanf("%d", &n);

    //printf("Fibonacci no indice %d eh igual a: %d", n, fibonacci(n));
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
