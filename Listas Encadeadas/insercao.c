#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void insere_inicio(celula *le, int x){
    celula *p;
    p = malloc(sizeof(celula));

    p->dado = x;
    p->prox = le->prox;

    le->prox = p;
}

void insere_antes(celula *le, int x, int y){
    celula *p, *q, *r;

    p = malloc(sizeof(celula));

    p->dado = x;
    q = le;

    for(r = le->prox; r!=NULL && r->dado!=y; r=r->prox)
        q=r;

    p->prox = r;
    q->prox = p;
}
