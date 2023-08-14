#include <stdio.h>

int insertionSort(int vetor[], int tamanho){
  int i, j;
  int prox;
  for (i=1; i < tamanho; i++)
  {
    prox =  vetor[i];
    for (j = i-1; j >= 0 && prox<vetor[j]; j--)
    {
      vetor[j+1] = vetor[j];
      vetor[j+1] = prox;
    }
  }
  
}

int main (){
  int vetor[] = {8, 5, 3, 9, 2, 7, 1};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  int vetorOdernado = insertionSort(vetor, tamanho);
}