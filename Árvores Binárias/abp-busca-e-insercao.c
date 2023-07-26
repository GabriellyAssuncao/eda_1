#include <stdio.h>
#include <stdlib.h>

typedef struct No{
  int key;
  struct No* left;
  struct No* right;
}No;

No* criarNo(int chave){
  No *novoNo;
  novoNo = (No*)malloc(sizeof(No));
  novoNo->left = NULL;
  novoNo->right = NULL;
  novoNo->key = chave;

  return novoNo;
}
No* inserirNo(No* raiz, int chave){
  if(raiz == NULL){
    return criarNo(chave);
  }
  if(chave < raiz->key){
    raiz->left = inserirNo(raiz->left, chave);  
  }else if(chave > raiz->key){
    raiz->right = inserirNo(raiz->right, chave);
  }
  return raiz;
}
No* buscaElemento(No* raiz, int chave){
  if(raiz == NULL || raiz->key == chave){
    return raiz;
  }
  if(chave < raiz->key){
    return buscaElemento(raiz->left, chave);
  }else{
    return buscaElemento(raiz->right, chave);
  }
}
No *encontrarMinimo(No *no)
{
  No *atual = no;

  while (atual && atual->left != NULL)
  {
    atual = atual->left;
  }

  return atual;
}

No *excluirElemento(No *raiz, int chave)
{
  if (raiz == NULL)
  {
    return raiz;
  }

  if (chave < raiz->key)
  {
    raiz->left = excluirElemento(raiz->left, chave);
  }
  else if (chave > raiz->key)
  {
    raiz->right = excluirElemento(raiz->right, chave);
  }
  else
  {
    // Caso 1: Nó a ser excluído é uma folha (não possui filhos)
    if (raiz->left == NULL && raiz->right == NULL)
    {
      free(raiz);
      raiz = NULL;
    }
    // Caso 2: Nó a ser excluído possui apenas um filho
    else if (raiz->left == NULL)
    {
      No *temp = raiz;
      raiz = raiz->right;
      free(temp);
    }
    else if (raiz->right == NULL)
    {
      No *temp = raiz;
      raiz = raiz->left;
      free(temp);
    }
    // Caso 3: Nó a ser excluído possui dois filhos
    else
    {
      No *minimoDireita = encontrarMinimo(raiz->right);
      raiz->key = minimoDireita->key;
      raiz->right = excluirElemento(raiz->right, minimoDireita->key);
    }
  }

  return raiz;
}
void imprimirArvore(No *raiz)
{
  if (raiz == NULL)
  {
    return;
  }

  // Imprimir a subárvore esquerda
  imprimirArvore(raiz->left);

  // Imprimir o nó atual
  printf("%d ", raiz->key);

  // Imprimir a subárvore direita
  imprimirArvore(raiz->right);
}

int main () {
  No *raiz =  NULL;
  No *found;
  int key;

  raiz = inserirNo(raiz, 8);
  raiz = inserirNo(raiz, 3);
  raiz = inserirNo(raiz, 1);
  raiz = inserirNo(raiz, 6);
  raiz = inserirNo(raiz, 4);
  raiz = inserirNo(raiz, 7);
  raiz = inserirNo(raiz, 10);
  raiz = inserirNo(raiz, 14);
  raiz = inserirNo(raiz, 13);

  while (key != 0)
  {
    printf("\nBusque uma chave na árvore, ou 0 para sair: ");
    scanf("%d", &key);

    if (key == 0)
      return 0;

    found = buscaElemento(raiz, key);

    if (found != NULL)
    { 
      printf("\nAchei o %d!", found->key);
    }
    else{
      printf("\nNao achei nenhuma chave %d", key);
    }
  }

  raiz = excluirElemento(raiz,7);
  int key2;
  while (key2 != 0)
  {
    printf("\nBusque uma chave na árvore, ou 0 para sair: ");
    scanf("%d", &key2);

    if (key2 == 0)
      return 0;

    found = buscaElemento(raiz, key2);

    if (found != NULL)
    {
      printf("\nAchei o %d!", found->key);
    }
    else
    {
      printf("\nNao achei nenhuma chave %d", key2);
    }
  }

  imprimirArvore(raiz);
}