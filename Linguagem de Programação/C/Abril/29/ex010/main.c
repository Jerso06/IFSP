#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);
    for(int i=valor;i<=valor*10;i+=valor){
        printf("%d / %d = %d\n",i,valor,(i/valor));
    }
    return 0;
}
