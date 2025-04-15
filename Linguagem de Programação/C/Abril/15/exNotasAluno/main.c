#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media;

    printf("Informe a 1 nota: ");
    scanf("%f", &n1);
    printf("Informe a 2 nota: ");
    scanf("%f", &n2);
    printf("Informe a 3 nota: ");
    scanf("%f", &n3);
    media = (n1+n2+n3)/3;

    if(media<3){
        printf("REPROVADO!");
    }else if(media>=3 && media<7){
        printf("EXAME!");
        printf("\nNota necessaria no exame: %.2f",12-media);
    }else{
        printf("APROVADO");
    }
    return 0;
}
