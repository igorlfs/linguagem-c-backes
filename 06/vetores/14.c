#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
	double V[10],soma=0;
	for ( int i=0; i<10; i++ ) {
		scanf("%lf",&V[i]);
		soma+=V[i];
	}
	double media=soma/10;
	printf("A média dos valores é: %lf\n",media);
	double sigma=0;
	for ( int i=0; i<10; i++ ) {
		sigma+=V[i]-media;
	}
	double d;
	//d=sqrt(sigma/9);
	//printf("O suposto desvio é: %lf",d);
	printf("A suposta variância é: %lf",sigma);
	/* O enunciado desse problema provavelmente está errado pois
	 * não eleva ao aquadrado a diferença (valores-média) pra cada valor
	 * como é o 'desvio padrão padrão' (como eu fiz no outro programa).
	 *
	 * Nesse caso, a suposta 'variância' sempre é nula, o que 
	 * pode analisado pelas propriedades de somatório */
	return 0;
}
