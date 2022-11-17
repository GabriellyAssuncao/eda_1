#include <stdio.h>

int main()
{
    int soma_par = 0, soma_impar = 0, numeros_digitados = 0;

    do
    {
        scanf("%d", &numeros_digitados);
        if (numeros_digitados%2 ==0){
            soma_par+=numeros_digitados;
        }else
        {
            soma_impar+=numeros_digitados;
        }
    } while (numeros_digitados !=0);
    
    printf("%d %d\n", soma_par, soma_impar);
    
    return 0;
}