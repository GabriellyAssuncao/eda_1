#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void divide_lista(celula *le, celula *odd, celula *even){
    celula *p;

    for(p = le->prox; p != NULL; p = p->prox){
        if((p->dado % 2) != 0){ //impar
            odd->prox = p;
            odd = odd->prox; //odd++
        }
        else{ //par
            even->prox = p;
            even = even->prox; //even++
        }
        if(p->prox == NULL){
            odd->prox = NULL;
            even->prox = NULL;
        }
    }
}