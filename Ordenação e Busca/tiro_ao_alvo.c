#include <stdio.h>
//tiro ao alvo
long long raios[100010];

int buscaBin(long long distancia, long long C){
	long long inicio = 1;
	long long fim = C;
	long long meio;

	if(distancia > raios[fim])
		return 0;

	while(inicio < fim){
		meio = (inicio + fim)/2;

		if(raios[meio] >= distancia)
			fim = meio;
		else
			inicio = meio+1;
	}

	return C+1-fim;
}

int main(){
	long long C, T;
	int i;
	long long x, y;
	long long pontos=0, R;

	scanf("%lld %lld", &C, &T);

	for(i=1; i<=C; i++){
		scanf("%lld", &R);
		raios[i] = R*R;
	}

	for(i=1; i<=T; i++){
		scanf("%lld %lld", &x, &y);
		pontos += buscaBin((x*x + y*y), C);
	}

	printf("%lld\n", pontos);

	return 0;
}