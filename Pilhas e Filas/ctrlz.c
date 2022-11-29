#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pilha
{
    char dado[101];
    struct pilha *prox;
} pilha;

pilha *cria_pilha()
{
    pilha *nova = malloc(sizeof(pilha));
    nova->prox = NULL;
    return nova;
}
void empilha(pilha *p, char *x)
{
    int i;
    pilha *novo = malloc(sizeof(pilha));
    if (novo == NULL)
        return;
    for (i = 0; x[i] != '\0'; i++)
    {
        novo->dado[i] = x[i];
    }
    novo->dado[i] = '\0';
    novo->prox = p->prox;
    p->prox = novo;
}
void desempilha(pilha *p)
{
    pilha *lixo = p->prox;
    if (lixo == NULL)
    {
        printf("NULL");
        printf("\n");
        return;
    }
    p->prox = lixo->prox;
    for (int i = 0; lixo->dado[i] != '\0'; i++)
    {
        printf("%c", lixo->dado[i]);
    }
    printf("\n");
    free(lixo);
}
int main()
{
    pilha *novo = cria_pilha();
    char instrucao[20];
    char frase[101];
    while (scanf(" %s", instrucao) != EOF)
    {
        if (instrucao[0] == 'i')
        {
            scanf(" %[^\n]s", frase);
            empilha(novo, frase);
        }
        else
        {
            desempilha(novo);
        }
    }

    return 0;
}