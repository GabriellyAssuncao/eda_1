#include <stdio.h>

int buscaMatriz (int vetor[][3], int tamanho_i, int tamanho_j, int elemento){
  int i;
  int j;
  int elemento_encontrado = 0; 
  for(i = 0; i < tamanho_i; i++){
    for(j = 0; j < tamanho_j; j++){
      if(vetor[i][j] == elemento){
        printf("Elemento encontrado na posiçao (%d %d)\n", i, j);
        elemento_encontrado = 1;
        return vetor[i][j];
      }
    }
  }
  if (!elemento_encontrado)
  {
    printf("Elemento não encontrado");
    return -1;
  }
  return 0;
}

int main (){
  int vetor[3][3] = {{4, 2, 3}, {0, 6, 8}, {7, 9, 1}};
  int elemento = 8;
  int tamanho_i = 3;
  int tamanho_j = 3;

  int elemento_encontrado = buscaMatriz(vetor, tamanho_i, tamanho_j, elemento);

  if (elemento_encontrado != -1)
  {
    printf("Elemento: %d\n", elemento_encontrado);
  }

  return 0;
  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j< 3; j++){
  //     printf("%d", vetor[i][j]);
  //     if(j == 2){
  //       printf("\n");
  //     }else
  //      printf(" ");
  //   }
  // }
}