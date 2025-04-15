#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Informe o codigo de origem: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            printf("Procedencia: Sul");
            break;
        case 2:
            printf("Procedencia: Norte");
            break;
        case 3:
            printf("Procedencia: Leste");
            break;
        case 4:
            printf("Procedencia: Oeste");
            break;
        case 5:
        case 6:
            printf("Procedencia: Nordeste");
            break;
        case 7:
        case 8:
        case 9:
            printf("Procedencia: Sudeste");
            break;
        default:
            printf("Codigo invalido");
    }
    return 0;
}
