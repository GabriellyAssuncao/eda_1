#include <stdio.h>

int main() {
    int contas[3];
    int soma_contas = 0;
    int soma_aparecido = 0;
    int indice;

    for (indice = 0; indice < 3; indice++) {
        scanf("%d\n", &contas[indice]);
        soma_contas = soma_contas + contas[indice];
        
    }
    scanf("%d", &soma_aparecido);

    if (soma_aparecido == soma_contas) {
        printf("Acertou\n");
    }
    if (soma_aparecido != soma_contas) {
        printf("Errou\n");
    }
    
    return 0;
}