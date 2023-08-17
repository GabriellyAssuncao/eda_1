#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int numero;
  int valor;
  struct Node *Prox;
}No;

No *inclui_cabeca(No *lista, int valor ){
  No *novoNo;
  novoNo = (No *)malloc(sizeof(No));
  novoNo->numero = valor;
  novoNo->Prox = lista;
  lista = novoNo;
  return lista;
}
No *inclui_calda(No *lista, int valor){
  No *novoNo, *aux;
  novoNo = (No *)malloc(sizeof(No));
  novoNo->numero = valor;
  novoNo->Prox = NULL;
  aux = lista;
  if (aux == NULL)
  {
    return novoNo;
  }
  while(aux->Prox != NULL){
    aux = aux->Prox;
  }
  aux->Prox = novoNo;
  return lista;
}
No *IncluiAntes(No *lista, int chave, int valor) //código no slide não funciona tiver que adaptar
{
  No *pNovoNo, *pAux;
  pNovoNo = (No *)malloc(sizeof(No));
  pNovoNo->numero = valor;
  pAux = lista;
  while (pAux != NULL && pAux->Prox != NULL && pAux->Prox->numero != chave)
  {
    pAux = pAux->Prox;
  }
  pNovoNo->Prox = pAux->Prox;
  pAux->Prox = pNovoNo;
  return lista;
}

No *exclui_cabeca(No *lista){
  No *aux;
  aux = lista;
  lista = lista->Prox;
  free(aux);
  return lista;
}

No *exclui_calda(No *lista){
  No *aux;
  aux = lista;
  while(aux->Prox->Prox != NULL){
    aux = aux->Prox;
  }
  free(aux->Prox);
  aux->Prox = NULL;
  return lista;
}

No *exclui_elemento(No *lista, int chave){
  No *ant, *pos;
  ant = lista;
  while (ant->Prox->numero != chave)
  {
    ant = ant->Prox;
  }
  pos = ant->Prox->Prox;
  free(ant->Prox);
  ant->Prox = pos;
  return lista;
}
int main () {
  No *lista = NULL, *aux;

  lista = inclui_cabeca(lista, 1);
  lista = inclui_cabeca(lista, 2);
  lista = inclui_cabeca(lista, 3);
  lista = inclui_cabeca(lista, 4);

  printf("inclui cabeça\n");

  aux = lista;
  while (aux != NULL)
  {
    printf("%d\n", aux->numero);
    aux = aux->Prox;
  }

  inclui_calda(lista, 1);
  inclui_calda(lista, 2);
  inclui_calda(lista, 3);

  printf("inclui calda\n");

  aux = lista;
  while (aux != NULL)
  {
    printf("%d\n", aux->numero);
    aux = aux->Prox;
  }

  printf("inclui antes\n");

  IncluiAntes(lista, 3, 7);

  aux = lista;
  while (aux != NULL)
  {
    printf("%d\n", aux->numero);
    aux = aux->Prox;
  }

  printf("exclui na cabeça\n");

  lista = exclui_cabeca(lista);

  aux = lista;
  while (aux != NULL)
  {
    printf("%d\n", aux->numero);
    aux = aux->Prox;
  }

  printf("exclui na calda\n");

  lista = exclui_calda(lista);
  aux = lista;
  while (aux != NULL)
  {
    printf("%d\n", aux->numero);
    aux = aux->Prox;
  }

  printf("exclui elemento\n");

  lista = exclui_elemento(lista, 2);
  aux = lista;
  while (aux != NULL)
  {
    printf("%d\n", aux->numero);
    aux = aux->Prox;
  }

  return 0;
}