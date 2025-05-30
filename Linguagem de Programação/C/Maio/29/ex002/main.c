#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[128];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;

int main()
{
    Aluno alunos[5];
    int indexProva1, indexPiorMedia, indexMaiorMedia;

    for(int i=0;i<5;i++){
        printf("Informe a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);
        printf("Informe o nome do aluno: ");
        scanf(" %129[^\n]", alunos[i].nome);
        printf("Informe a nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        printf("Informe a nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
        printf("Informe a nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
        alunos[i].media = (alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3;
        printf("Media: %.2f\n", alunos[i].media);
        if(alunos[i].media>=6.0){
            printf("Aluno aprovado!!!");
        }else{
            printf("Aluno reprovado!!!");
        }
        printf("\n\n");
    }

    for(int i=0;i<5;i++)
    {
        if(i==0){
            indexProva1 = 0;
            indexMaiorMedia = 0;
            indexPiorMedia = 0;
        }else if(alunos[i].nota1>alunos[indexProva1].nota1){
            indexProva1 = i;
        }

        if(alunos[i].media>alunos[indexMaiorMedia].media){
            indexMaiorMedia = i;
        }else if(alunos[i].media<alunos[indexPiorMedia].media){
            indexPiorMedia = i;
        }
    }

    printf("Melhor aluno na primeira prova: \n");
    printf("Nome: %s \nMatricula: %d \nNota prova: %.2f", alunos[indexProva1].nome, alunos[indexProva1].matricula, alunos[indexProva1].nota1);
    printf("\n\n");
    printf("Aluno com a maior media: \n");
    printf("Nome: %s \nMatricula: %d \nMedia: %.2f", alunos[indexMaiorMedia].nome, alunos[indexMaiorMedia].matricula, alunos[indexMaiorMedia].media);
    printf("\n\n");
    printf("Aluno com a menor media: \n");
    printf("Nome: %s \nMatricula: %d \nMedia: %.2f", alunos[indexPiorMedia].nome, alunos[indexPiorMedia].matricula, alunos[indexPiorMedia].media);
    return 0;
}
