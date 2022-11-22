#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void imprime(celula *le){
    celula *p = le->prox;

    if(le->prox==NULL) printf("NULL\n");

    else{
        while(p!=NULL){
            if(p->prox==NULL) printf("%d -> NULL\n", p->dado);
            else printf("%d -> ", p->dado);

            p=p->prox;
        }
    }
}

void imprime_rec(celula *le){
    if(le->prox==NULL) printf("NULL\n");

    else{
        printf("%d -> ", le->prox->dado);

        imprime_rec(le->prox);
    }
}