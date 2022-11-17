#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n, maior = 0, menor = 0, soma = 0;
  // ciclo de vida da aplicação
do
{
 // pedir o valor
 printf("Introduza um numero: ");
 scanf("%d",&n);

 // estás a executar as comparações mesmo que o o valor
 // inserido anteriormente seja 0
 soma=soma+n;
 if(n>maior)
   maior=n;
 if(n<menor && n!=0)
   menor=n;

// comparação para o fim do ciclo
    }while(n!=0);

   system("Pause");
}