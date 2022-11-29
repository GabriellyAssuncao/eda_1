#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int empilha(celula *topo, int x)
{
    celula *novo;
    novo = malloc(sizeof(celula));

    if (novo == NULL)
        return 0;

    novo->dado = x;
    novo->prox = topo->prox;

    topo->prox = novo;
    return 1;
}