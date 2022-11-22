#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void mescla_listas(celula *le1, celula *le2, celula *le3){
    celula *p, *t, *r, *aux;

    for(p = le1->prox, t = le2->prox, r = le3; p != NULL && t != NULL; r = r->prox){
        if(p->dado < t->dado){
            aux = p->prox;
            r->prox = p;
            p = aux;
        }
        else{
            aux = t->prox;
            r->prox = t;
            t = aux;
        }
    }

    if(p == NULL)
        r->prox = t;

    else if(t == NULL)
        r->prox = p;
}