#include <stdio.h>

int selectionSort(int vetor[], int tamanho)
{
  int i, j;
  for (i = 0; i < tamanho - 1; i++)
  {
    int indiceMenor = i;
    for (j = i + 1; j < tamanho; j++)
    {
      if (vetor[j] < vetor[indiceMenor])
      {
        indiceMenor = j;
      }
    }
  int temp = vetor[i];
  vetor[i] = vetor[indiceMenor];
  vetor[indiceMenor] = temp;
  }
}

int main()
{
  int vetor[] = {8, 5, 3, 9, 2, 7, 1};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  int vetorOdernado = selectionSort(vetor, tamanho);

  printf("Vetor apos a ordenacao: ");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}