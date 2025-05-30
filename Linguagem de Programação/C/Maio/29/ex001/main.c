#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[128];
    int dia;
    int mes;
    int ano;
} Pessoa;

int main()
{
    int indexVelho, indexNovo;
    Pessoa pessoas[6];

    for(int i=0;i<6;i++){
        printf("Informe o seu nome: ");
        scanf(" %129[^\n]", pessoas[i].nome);
        printf("Informe o dia do seu nascimento: ");
        scanf("%d", &pessoas[i].dia);
        printf("Informe o mes do seu nascimento: ");
        scanf("%d", &pessoas[i].mes);
        printf("Informe o ano do seu nascimento: ");
        scanf("%d", &pessoas[i].ano);
        printf("\n\n");
    }

    for(int i=0;i<6;i++){
        if(i==0){
            indexNovo = i;
            indexVelho = i;
        }else if(pessoas[i].ano<pessoas[indexVelho].ano){
            indexVelho = i;
        }else if(pessoas[i].ano>pessoas[indexNovo].ano){
            indexNovo = i;
        }else if(pessoas[i].ano==pessoas[indexVelho].ano){
            if(pessoas[i].mes==pessoas[indexVelho].mes){
                if(pessoas[i].dia<pessoas[indexVelho].dia){
                    indexVelho = i;
                }
            }else if(pessoas[i].mes<pessoas[indexVelho].mes){
                indexVelho = i;
            }
        }else if(pessoas[i].ano==pessoas[indexNovo].ano){
            if(pessoas[i].mes==pessoas[indexNovo].mes){
                if(pessoas[i].dia>pessoas[indexNovo].dia){
                    indexNovo = i;
                }
            }else if(pessoas[i].mes>pessoas[indexNovo].mes){
                indexNovo = i;
            }
        }
    }

    printf("\nPessoa mais velha: %s",pessoas[indexVelho].nome);
    printf("\nPessoa mais nova: %s", pessoas[indexNovo].nome);
    return 0;
}
