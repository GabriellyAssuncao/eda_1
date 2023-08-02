#include <stdio.h>
#include <stdlib.h>

long int somavet (int *vet, int qtde){
  if(qtde == 0){
    return 0;
  }
  else{
    return vet[qtde - 1] + somavet(vet, qtde - 1);
  }
  return 0;
}
int main ()
{
int *vet = malloc(sizeof(int));
vet[0] = 1;
vet[1] = 2;
vet[2] = 3;
int resultado = somavet(vet, 3);
printf("%d", resultado);
return 0;
}