#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;

    printf("Informe o coeficiente 'a': ");
    scanf("%lf", &a);
    if(a!=0){
        printf("Informe o coeficiente 'b': ");
        scanf("%lf", &b);
        printf("Informe o coeficiente 'c': ");
        scanf("%lf", &c);
        delta = b*b-4*a*c;
        if(delta<0){
            printf("Nao existe raiz!");
        }else if(delta==0){
            x1 = -b/(2*a);
            printf("Raiz unica: %.0f", x1);
        }else{
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Primeira raiz: %.0f \nSegunda raiz: %.0f", x1, x2);
        }
    }else{
        printf("Nao e equacao do segundo grau!");
    }
    return 0;
}
