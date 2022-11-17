#include <stdio.h>

int main() {
    int valor_conta, consumo;

    scanf("%d", &consumo);
    if (consumo <=10) {
        valor_conta = 7;
    }
    else if (consumo >= 11 && consumo <=30) {
        valor_conta = (consumo-10) * 1 + 7;
    }
    else if (consumo >= 31 && consumo <=100) {
        valor_conta = (consumo-30) * 2 + 27;
    }
    else  {
        valor_conta = (consumo-100) * 5 + 167;
    }
    printf("%d\n", valor_conta);
    return 0;
}