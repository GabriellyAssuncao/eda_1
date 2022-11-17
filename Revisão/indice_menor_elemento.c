#include <stdio.h>

int main()
{

    int i, menor_elemento, tamanho_vetor, posicao_vetor = 0;
    scanf("%d", &tamanho_vetor); 
    int vetor[tamanho_vetor];

    for (i = 0; i < tamanho_vetor; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 1; i < tamanho_vetor; i++)
    {
        if (vetor[i] < menor_elemento)
        {
            menor_elemento = vetor[i];
            posicao_vetor = i;
        }
    }

    printf("%d\n", posicao_vetor);

    return 0;
}