#include <stdio.h>
//ordena simples
void troca(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selection_rec(int *v, int n, int i){
    if(i<=n-1){
        int min = i;

        for(int j=i+1; j<n; j++)
            if(v[j] < v[min]) min=j;

        troca(&v[min], &v[i]);

        selection_rec(v, n, i+1);
    }
}

int main(){
    int v[1000], i=0;

    while(scanf("%d", &v[i]) != EOF)
        i++;

    int tam = i;

    selection_rec(v, tam, 0);

    for(i=0; i<tam; i++){
        if(i!=tam-1)
            printf("%d ", v[i]);
        else
            printf("%d\n", v[i]);
    }

    return 0;
}