
#include <stdio.h>
#include <stdlib.h>

unsigned long int array[81];

long int fibonacci(int posicao_n)
{
  if ((posicao_n <= 2) && array[posicao_n] == NULL)
  {
    array[posicao_n] = 1;
  }
  else if (array[posicao_n] == NULL)
  {
    array[posicao_n] = fibonacci(posicao_n - 2) + fibonacci(posicao_n - 1);
  }
  return array[posicao_n];
}