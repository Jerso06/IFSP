#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[365], soma=0, media, contAcima=0, maior, menor;

    srand(time(NULL));

    for(int i=0;i<365;i++){
        vetor[i] = -5 + rand() % (60 - -5 + 1);
        if(i==0){
            maior = vetor[i];
            menor = vetor[i];
        }else if(vetor[i]>maior){
            maior = vetor[i];
        }else if(vetor[i]<menor){
            menor = vetor[i];
        }
    }
    for(int i=0;i<365;i++){
        soma+=vetor[i];
    }
    media= soma/365;

    for(int i=0;i<365;i++){
        if(vetor[i]>=media){
            contAcima++;
        }
    }

    printf("media: %d \nQtd acima da media: %d \nMaior: %d \nMenor: %d",media,contAcima,maior,menor);
    return 0;
}
