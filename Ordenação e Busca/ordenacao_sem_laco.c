//#include <stdio.h>
//ordena sem laço
void troca(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void ordena(int *v, int n){
    if(n>0){
        ordena(v, n-1);
        ordena_ordena(v, n);
    }
}

void ordena_ordena(int *v, int n){
    if(n>1){
        if(v[n-1] < v[n-2])
            troca(&v[n-1], &v[n-2]);

        ordena_ordena(v, n-1);
    }
}
/*
int main(){
    int v[] = {7,3,2,5,4,3};
    int i, n = 6;
    ordena(v, n);
    for(i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
*/