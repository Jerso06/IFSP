#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int menu, p1, p2, p3;
    double n1, n2, n3;
    char c;
    do{
        printf("\nMENU: \n1- Media aritmetica \n2- Media ponderada \n3- Sair \nR: ");
        scanf("%d", &menu);
        switch(menu){
        case 1:
            system("cls");
            printf("Informe a primeira nota: ");
            scanf("%lf", &n1);
            printf("Informe a segunda nota: ");
            scanf("%lf", &n2);
            printf("Media aritmetica: %.2f", (n1+n2)/2);
            break;
        case 2:
            system("cls");
            printf("Informe a primeira nota: ");
            scanf("%lf", &n1);
            printf("Informe o peso da primeira nota: ");
            scanf("%d", &p1);
            printf("Informe a segunda nota: ");
            scanf("%lf", &n2);
            printf("Informe o peso da segunda nota: ");
            scanf("%d", &p2);
            printf("Informe a terceira nota: ");
            scanf("%lf", &n3);
            printf("Informe o peso da terceira nota: ");
            scanf("%d", &p3);
            printf("Media ponderada: %.2f", ((n1*p1+n2*p2+n3*p3)/(p1+p2+p3)));
            break;
        case 3:
            system("cls");
            printf("Deseja mesmo sair? (s/n) ");
            scanf(" %c", &c);
            if(toupper(c)=='N'){
                menu = 0;
            }
            break;
        default:
            printf("Valor invalido!");

        }
    }while(menu!=3);
    return 0;
}
