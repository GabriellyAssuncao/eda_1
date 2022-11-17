#include <stdio.h>

int main()
{

    // Variaveis
    int cinema[20][25];
    int i, j, F, L, num;
    char letra;

    // Inicializando o vetor com 0
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 25; j++)
        {
            cinema[i][j] = 0;
        }
    }

    // Lendo a quantidade de linhas e colunas
    scanf("%d%d", &F, &L);

    // Verificando se a entrada é diferende de EOF e adicionando a letra no vetor
    while ((scanf("%c%d", &letra, &num)) != EOF)
    {
        cinema[letra - 65][num - 1] = 1;
    }
    printf(" ");

    // Imprimindo o numero das colunas
    for (i = 1; i <= L; i++)
    {
        printf(" %02d", i);
    }
    printf("\n");

    // Imprimindo a letra das linhas
    for (i = F - 1; i >= 0; i--)
    {
        printf("%c", i + 65);

        // Verificando se os valores do vetor e preenchendo com XX ou --
        for (j = 0; j < L; j++)
        {
            if (cinema[i][j] == 0)
            {
                printf(" --");
            }
            else
            {
                printf(" XX");
            }
        }
        printf("\n");
    }
    return 0;
}