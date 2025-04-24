#include <stdio.h>
#include <stdlib.h>

int resultado=0;
char matriz[3][3] = {'1','2','3','4','5','6','7','8','9'};
void jogada(int jogador, char escolha);
void verifica();

void mostra(){

    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            printf("|  %c    ",matriz[i][j]);
        }
        printf("\n______________________\n");
    }
}

int main()
{
    int cont=0;
    char play;
    mostra();

    do{
        printf("\nJogador 1: ");
        scanf(" %c", &play);
        jogada(1, play);
        printf("\n");
        if(resultado != 0){
            break;
        }
        mostra();
        printf("\nJogador 2: ");
        scanf(" %c", &play);
        jogada(2, play);
        printf("\n");
        mostra();
    }while(resultado==0);

    switch(resultado){
    case 1:
        system("cls");
        mostra();
        printf("\nJogador 1 venceu!\n");
        break;
    case 2:
        system("cls");
        mostra();
        printf("\nJogador 2 venceu!\n");
        break;
    case 3:
        system("cls");
        mostra();
        printf("\nDeu velha!\n");
    }
    return 0;
}

void jogada(int jogador, char escolha){
    int valido = 0;
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            if(escolha==matriz[x][y]){
                if(jogador==1){
                    matriz[x][y]='O';
                }else{
                    matriz[x][y]='X';
                }
                verifica();
                valido = 1;
                return;
            }
        }
    }
}

void verifica(){
    if(matriz[0][0]==matriz[0][1] &&matriz[0][0]==matriz[0][2] || matriz[1][0]==matriz[1][1] && matriz[1][0]==matriz[1][2] || matriz[2][0]==matriz[2][1] && matriz[2][0]==matriz[2][2]){
        if(matriz[0][0]=='O' && matriz[0][1]=='O' && matriz[0][2]=='O' || matriz[1][0]=='O' && matriz[1][1]=='O' && matriz[1][2]=='O' || matriz[2][0]=='O' && matriz[2][1]=='O' && matriz[2][2]=='O'){
            resultado = 1;
        }else{
            resultado = 2;
        }
    }else if(matriz[0][0]==matriz[1][0] &&matriz[0][0]==matriz[2][0] || matriz[0][1]==matriz[1][1] && matriz[0][1]==matriz[2][1] || matriz[0][2]==matriz[1][2] && matriz[0][2]==matriz[2][2]){
        if(matriz[0][0]=='O' && matriz[1][0]=='O' && matriz[2][0]=='O' || matriz[0][1]=='O' && matriz[1][1]=='O' && matriz[2][1]=='O' || matriz[2][0]=='O' && matriz[2][1]=='O' && matriz[2][2]=='O'){
            resultado = 1;
        }else{
            resultado = 2;
        }
    }else if(matriz[0][0]==matriz[1][1] && matriz[0][0]==matriz[2][2] || matriz[0][2]==matriz[1][1] && matriz[0][2]==matriz[2][0]){
        if(matriz[0][0]=='O' && matriz[1][1]=='O' && matriz[2][2]=='O' || matriz[0][2]=='O' && matriz[1][1]=='O' && matriz[2][0]=='O'){
            resultado = 1;
        }else{
            resultado = 2;
        }
    }else if(matriz[0][0]=='1' || matriz[0][1]=='2' || matriz[0][2]=='3' || matriz[1][0]=='4' || matriz[1][1]=='5' || matriz[1][2]=='6' || matriz[2][0]=='7' || matriz[2][1]=='8' || matriz[2][2]=='9'){
        resultado = 0;
    }else{
        resultado = 3;
    }
}
