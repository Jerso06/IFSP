#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0, contPrimos=0, contG=1;

    while(contPrimos<100){
        for(int i=1;i<=contG;i++){
            if(contG%i==0){
                cont++;
            }
        }
        if(cont==2){
            printf("%d, ",contG);
            contPrimos++;
        }
        cont=0;
        contG++;
    }
    return 0;
}
