#include <stdio.h>
#include <stdlib.h>


int buscaLinear(int vetor[], int tamanho, int elemento){
  for (int i = 0; i < tamanho; i++)
  { 
    if(vetor[i] == elemento){
      return i;
    }
  }  
  return -1;
}
int main (){
  int vetor[] = {1,2,3,4,5,6};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int elemento = 3;
  int posicao = buscaLinear(vetor, tamanho, elemento);
  if (posicao == -1)
  {
    printf("Elemento nao encontrado\n");
  }
  else
  {
    printf("Elemento encontrado na posicao %d\n", posicao);
  }
}