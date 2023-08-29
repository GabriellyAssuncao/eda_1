#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
  int numero;
  struct No *Prox;
  struct No *Ant;
} No;

No *incluiCabeca(No *lista, int valor)
{
  No *novoNo = (No *)malloc(sizeof(No));
  novoNo->numero = valor;
  novoNo->Ant = NULL;
  novoNo->Prox = lista;

  if (lista != NULL)     //não existe essa parte no slide
  {
    lista->Ant = novoNo;
  }

  lista = novoNo;
  return lista;
}

No *incluiCalda(No *lista, int valor){
  No *novoNo, *aux;
  novoNo = (No *)malloc(sizeof(No));
  novoNo->numero = valor;
  novoNo->Prox = NULL;
  aux = lista;
  while(aux->Prox != NULL){
    aux = aux->Prox;
  }
  aux->Prox = novoNo;
  novoNo->Ant = aux;
  return lista;
}

No *incluiDepois(No *lista, int chave, int valor)
{
  No *novoNo, *aux;
  novoNo = (No *)malloc(sizeof(No));
  novoNo->numero = valor;
  aux = lista;
  while (aux->Prox->numero != chave)
  {
    aux = aux->Prox;
  }
  novoNo->Prox = aux->Prox;
  novoNo->Ant = aux;
  aux->Prox = novoNo;
  novoNo->Prox->Ant = novoNo;
  return lista;
}

No *excluiCabeca(No *lista){
  lista = lista->Prox;
  free(lista->Ant);
}

int main()
{
  No *lista = NULL;
  No *aux = NULL;

  lista = incluiCabeca(lista, 10);
  lista = incluiCabeca(lista, 20);
  lista = incluiCabeca(lista, 30);
  lista = incluiCabeca(lista, 40);

  aux = lista;
  while (aux != NULL)
  {
    printf("%d\n", aux->numero);
    aux = aux->Prox;
  }

  incluiCalda(lista, 50);

  printf("################\n");

  aux = lista;

  while (aux != NULL)
  {
    printf("%d\n", aux->numero);
    aux = aux->Prox;
  }
  
  incluiDepois(lista, 20, 70);
  printf("################\n");

  aux = lista;
  while (aux != NULL)
  {
    printf("%d\n", aux->numero);
    aux = aux->Prox;
  }

  return 0;
}
