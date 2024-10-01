#include <stdio.h>
#include <stdlib.h>

int main() {

  char jogo[5][5];
  int i, a, linha, coluna, jogador, ganhou, jogadas, opcao;


do{
    jogador = 1;
    ganhou = 0;
    jogadas = 0;

  for (i = 0; i < 5; i++) {
    for (a = 0; a < 5; a++) {
      jogo[i][a] = ' ';
    }
  }
  
do{ 
    
  printf("\n\n\t 0   1   2   3   4\n\n");
  for (i = 0; i < 5; i++) {
    for (a = 0; a < 5; a++) {
      if(a == 0)
        printf("\t");
      printf(" %c ", jogo[i][a]);
      if (a < 4) 
        printf("|");
      if(a == 4)
        printf("  %d", i);
      
    } 
    if(i < 4) 
    printf("\n\t-------------------");
      printf("\n");
      
  }
  
do{ 
  printf("JOGADOR %d: Digite a linha e coluna que deseja jogar: ", jogador); 
  scanf("%d%d", &linha, &coluna);
  } while(linha < 0 || linha > 4 || coluna < 0 || coluna > 4 || jogo[linha][coluna] != ' ');

  if(jogador == 1){
    jogo[linha][coluna] = '0';
    jogador++;
  } else{
    jogo[linha][coluna] = 'X';
    jogador = 1;
  }

  jogadas++;

  //Linhas
  if(jogo[0][0] == '0' && jogo[0][1] && jogo[0][2] == '0' && jogo[0][3] == '0' && jogo[0][4] == '0' || 
    jogo[1][0] == '0' && jogo[1][1] && jogo[1][2] == '0' && jogo[1][3] == '0' && jogo[1][4] == '0'  ||
    jogo[2][0] == '0' && jogo[2][1] && jogo[2][2] == '0' && jogo[2][3] == '0' && jogo[2][4] == '0' ||
    jogo[3][0] == '0' && jogo[3][1] && jogo[3][2] == '0' && jogo[3][3] == '0' && jogo[3][4] == '0' ||
    jogo[4][0] == '0' && jogo[4][1] && jogo[4][2] == '0' && jogo[4][3] == '0' && jogo[4][4] == '0'
    ) {
    printf("\nParabens ! O jogador 1 venceu por linha!\n");
    ganhou = 1;
    }

    if(jogo[0][0] == 'X' && jogo[0][1] && jogo[0][2] == 'X' && jogo[0][3] == 'X' && jogo[0][4] == 'X' || 
    jogo[1][0] == 'X' && jogo[1][1] && jogo[1][2] == 'X' && jogo[1][3] == 'X'  && jogo[1][4] == 'X'  ||
    jogo[2][0] == 'X' && jogo[2][1] && jogo[2][2] == 'X' && jogo[2][3] == 'X'  && jogo[2][4] == 'X'  ||
    jogo[3][0] == 'X' && jogo[3][1] && jogo[3][2] == 'X' && jogo[3][3] == 'X'  && jogo[3][4] == 'X'  ||
    jogo[4][0] == 'X' && jogo[4][1] && jogo[4][2] == 'X' && jogo[4][3] == 'X' && jogo[4][4] == 'X'
    ) {
    printf("\nParabens ! O jogador 2 venceu por linha!\n");
      ganhou = 1;
    }

  //Colunas
    if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' && jogo[3][0] == '0' && jogo[4][0] == '0' ||
      jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' && jogo[3][1] == '0' && jogo[4][1] == '0' ||
      jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0' && jogo[3][2] == '0' && jogo[4][2] == '0' ||
      jogo[0][3] == '0' && jogo[1][3] == '0' && jogo[2][3] == '0' && jogo[3][3] == '0' && jogo[4][3] == '0'||
      jogo[0][4] == '0' && jogo[1][4] == '0' && jogo[2][4] == '0' && jogo[3][4] == '0' && jogo[4][4] == '0'
       ) {
      printf("\nParabens ! O jogador 1 venceu por coluna!\n");
      ganhou = 1;
       }
  
  if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' && jogo[3][0] == 'X' && jogo[4][0] == 'X' ||
      jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' && jogo[3][1] == 'X' && jogo[4][1] == 'X' ||
      jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X' && jogo[3][2] == 'X' && jogo[4][2] == 'X' ||
      jogo[0][3] == 'X' && jogo[1][3] == 'X' && jogo[2][3] == 'X' && jogo[3][3] == 'X' && jogo[4][3] == 'X'||
      jogo[0][4] == 'X' && jogo[1][4] == 'X' && jogo[2][4] == 'X' && jogo[3][4] == 'X' && jogo[4][4] == 'X'
       ) {
      printf("\nParabens ! O jogador 2 venceu por coluna!\n");
    ganhou = 1;
       }

  //Diagonal principal
  if(jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0' && jogo[3][3] == '0' && jogo[4][4] == '0') {
    printf("\nParabens ! O jogador 1 venceu pela diagonal principal!\n");
    ganhou = 1;
  }

  if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X') {
    printf("\nParabens ! O jogador 2 venceu pela diagonal principal!\n");
    ganhou = 1;
  }

  //Diagonal secundaria
  if(jogo[0][4] == '0' && jogo[1][3] == '0' && jogo[2][2] == '0' && jogo[3][1] == '0' && jogo[4][0] == '0') {
    printf("\nParabens ! O jogador 1 venceu pela diagonal secundaria!\n");
    ganhou = 1;
  }

  if(jogo[0][4] == 'X' && jogo[1][3] == 'X' && jogo[2][2] == 'X' && jogo[3][1] == 'X' && jogo[4][0] == 'X') {
    printf("\nParabens ! O jogador 2 venceu pela diagonal secundaria!\n");
    ganhou = 1;
  }
    }while(ganhou == 0 && jogadas < 25);

  if(ganhou == 0)
    printf("\nO jogo finalizou sem ganhador!\n");

    printf("\nDigite 1 se deseja jogar novamente : \n");
    scanf("%d", &opcao);
  }while(opcao == 1);


  
  return 0;
}
