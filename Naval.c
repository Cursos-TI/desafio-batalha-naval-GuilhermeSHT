#include <stdio.h>
#define linha 10
#define coluna 10
#define MatrizConeLinha 5
#define MatrizConeColuna 5

int main () {

    char Inicio[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    //começando a criar o tabuleiro

    int tabuleiro [10][10];
    int i;
    int j;

    for (i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++) {
            tabuleiro[i][j] = 0;
        }
    }
  int navio[3] = {3,3,3};
   
  int linha1 = 2;
  int coluna1 = 4;

  for (i = 0; i < 3; i++){
    tabuleiro[linha1][coluna1 + i] = navio[i];
  }

  int linha2 = 5;
  int coluna2 = 7;
   
  for (i = 0; i < 3; i++){
    tabuleiro[linha2 + i][coluna2] = navio[i];
  }

  

  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      if ( i == j){
        tabuleiro[i][j] = 3;
      }
    }
  }
  
  for (i = 0; i < linha; i++){
    for (j = 0; j < coluna; j++){
      if ( i + j == 9){
        tabuleiro[i][j] = 3;
      }
    }
  }

 int matriz[MatrizConeLinha][MatrizConeColuna];
      for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
          if (matriz [i][j] ){
           
          }
        }
      }
  
 //imprimindo o tabuleiro

  printf("BATALHA NAVAL\n");
 for(i = 0; i < 10; i++){
    printf("%c", Inicio[i]);
 }
 printf("\n");

 for(i = 0; i < linha; i++){

    printf("%d", i);

    for (j = 0; j < coluna; j++) {

     printf("%d", tabuleiro[i][j]); 
    }

    printf("\n");

    
 }

  

   
  

    
    







  return 0;
}

