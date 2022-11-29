#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int desempilha(celula *topo, int *y)
{
    if (topo == NULL || topo->prox == NULL)
        return 0;

    celula *lixo = topo->prox;
    *y = lixo->dado;

    topo->prox = lixo->prox;
    free(lixo);

    return 1;
}