#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multas, codigo, codigoMaior, multasMaior;
    double somaMultas=0,soma, valor;

    for(int i=0;i<10;i++){
        soma=0;
        printf("Informe sua carteira de motorista: ");
        scanf("%d", &codigo);
        printf("Informe o numero de multas obtidas: ");
        scanf("%d", &multas);
        if(i==0){
            codigoMaior = codigo;
            multasMaior = multas;
        }else{
            if(multas>multasMaior){
                codigoMaior = codigo;
                multasMaior = multas;
            }
        }
        for(int j=0;j<multas;j++){
            printf("Informe o valor da %d multa: ",j+1);
            scanf("%lf", &valor);
            soma+=valor;
        }
        somaMultas+=soma;
        printf("\n");
    }
    printf("Somatorio: %.2f", somaMultas);
    printf("\nCarteira com mais multas: %d",codigoMaior);
    printf("\nNumero de multas desta carteira: %d",multasMaior);
    return 0;
}
