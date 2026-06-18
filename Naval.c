#include <stdio.h>
#include <stdlib.h>
#define linha 10
#define coluna 10
#define MatrizConeLinha 5
#define MatrizConeColuna 5
#define Centro 5

int main() {

    char Inicio[10] = {'A','B','C','D','E','F','G','H','I','J'};

    int tabuleiro[10][10];
    int i, j;

    // Preencher tabuleiro
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            tabuleiro[i][j]=0;
        }
    }

    // Navio horizontal
    int navio[3]={3,3,3};

    int linha1=2;
    int coluna1=4;

    for(i=0;i<3;i++){
        tabuleiro[linha1][coluna1+i]=navio[i];
    }

    // Navio vertical
    int linha2=5;
    int coluna2=7;

    for(i=0;i<3;i++){
        tabuleiro[linha2+i][coluna2]=navio[i];
    }

    int linha3 = 2;
    int coluna3 = 7;

   for(i = 0; i < 3; i++){  
    tabuleiro[linha3 + i][coluna3 - i] = navio[i];
      }

    // CRUZ
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){

            if(i==Centro || j==Centro){

                if(tabuleiro[i][j]==0){
                    tabuleiro[i][j]=1;
                }

            }

        }
    }


    int inicioLinha=0;
    int inicioColuna =0;

    for(i=0;i<MatrizConeLinha;i++){
        for(j=0;j<MatrizConeColuna;j++){

            if(j>=2-i && j<=2+i){

                if(tabuleiro[inicioLinha+i][inicioColuna+j]==0){
                    tabuleiro[inicioLinha+i][inicioColuna+j]=1;
                }

            }

        }
    }
    int inicioLinha1 = 2;
    int inicioColuna1 = 2;

for(i=0;i<5;i++){

    int largura;

    if(i<=2)
        largura=i;
    else
        largura=4-i;

    for(j=2-largura;j<=2+largura;j++){

        if(tabuleiro[inicioLinha1+i][inicioColuna1+j]==0){
            tabuleiro[inicioLinha1+i][inicioColuna1+j]=1;
        }

    }
}


    // Imprimir tabuleiro
    printf("BATALHA NAVAL\n ");

    for(i=0;i<10;i++){
        printf("%c ",Inicio[i]);
    }

    printf("\n");

    for(i=0;i<linha;i++){

        printf("%d ",i);

        for(j=0;j<coluna;j++){

            printf("%d ",tabuleiro[i][j]);

        }

        printf("\n");
    }

    return 0;
}