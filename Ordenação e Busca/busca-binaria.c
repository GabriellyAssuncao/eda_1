#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int vetor[], int tamanho, int elemento) //não pode ser aplicado em vetor desordenado
{
  int inicio = 0, fim = tamanho-1, meio;
  while (inicio <= fim){
    meio = (inicio+fim)/2;
    if (elemento == vetor[meio])
    {
      return meio;
    }
    if (elemento < vetor[meio])
    {
      fim = meio-1; // busca nos valores menores
    }else{
      inicio = meio + 1; // busca nos valores maiores
    }
  }
  return -1;
}

int main()
{
  int vetor[] = {1, 2, 3, 4, 5, 6};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int elemento = 2;
  int posicao = buscaBinaria(vetor, tamanho, elemento);

  if (posicao == -1)
  {
    printf("elemento não encontrado");
  }
  else
  {
    printf("elemento encontrado na posição %d\n", posicao);
  }
}