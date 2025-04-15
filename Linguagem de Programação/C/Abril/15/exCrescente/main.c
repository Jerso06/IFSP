#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, n1, n2, n3;

    printf("Informe 3 valores diferentes: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        n1 = a;
        if(b>c){
            n2 = b;
            n3 = c;
        }else{
            n2 = c;
            n3 = b;
        }
    }else if(b>a && b>c){
        n1 = b;
        if(a>c){
            n2 = a;
            n3 = c;
        }else{
            n2 = c;
            n3 = a;
        }
    }else{
        n1 = c;
        if(b>a){
            n2 = b;
            n3 = a;
        }else{
            n2 = a;
            n3 = b;
        }
    }
    printf("Ordem Crescente: %d %d %d", n3, n2, n1);
    return 0;
}
