#include <stdio.h>
#include <string.h>

void trocaX(char *string, int index, int size)
{
    if (index == size)
    {
        return;
    }

    if (string[index] == 'x')
    {
        printf("%c", 'y');
    }
    else
    {
        printf("%c", string[index]);
    }

    trocaX(string, index + 1, size);
}

int main()
{
    char palavra[501];
    int index = 0, size;

    scanf("%s", palavra);
    size = strlen(palavra); // retorna o tamanho da string palavras
    fflush(stdin);
    trocaX(palavra, index, size);
    printf("\n");

    return 0;
}
