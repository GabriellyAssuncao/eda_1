#include <stdio.h>

int main()
{
    int numeros_lidos = 0;
    int numeros_de_saida = 0;

    while ((scanf("%d", &numeros_lidos) != EOF)){
        numeros_de_saida++;
    }
    printf("%d\n", numeros_de_saida);

    return 0;
}