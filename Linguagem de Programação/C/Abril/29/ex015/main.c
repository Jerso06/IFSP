#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, primo, cont=0;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    printf("Numero | Fator Primo");
    while(valor!=1){
        for(int i=0;i<valor;i++){
            cont=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    cont++;
                }
            }
            if(cont==2){
                primo = i;
                while(valor%primo==0){
                    printf("\n%d | %d",valor,primo);
                    valor/=primo;
                }
            }
        }
    }
    return 0;
}
