#include <stdio.h>
//nao ordenado
int busca_binaria(int *v, int n, int x){
    int e = -1; //esquerda
    int d = n; //direita
    int m; //meio

    while(e<d-1){
        m = (e+d)/2;

        if(v[m] == x) return m;

        else if(v[m]<x) e=m;

        else d=m;
    }
    if(v[d]==x) return d;
    else return -1;
}

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
    int n, m, i, j, x;

    scanf("%d%d", &n, &m);

    int v[n];
    int save[n];
    int aux[m];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        save[i] = v[i]; //manter vetor original
    }

    selection_rec(v, n, 0); //ordenar vetor para busca binaria

    for(j=0; j<m; j++){
        scanf("%d", &x);
        aux[j] = busca_binaria(v, n, x);

        if(aux[j] != -1){ //se numero existir, busca no vetor original sua posicao
            for(i=0; i<n; i++){
                if(save[i]==x) aux[j]=i;
            }
        }
    }

    for(j=0; j<m; j++)
        printf("%d\n", aux[j]);

    return 0;
}