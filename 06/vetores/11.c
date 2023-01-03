#include <stdio.h>
#include <stdlib.h>
int main () {
	/* Não ficou claro pra mim, como faço o conjunto 
	 * ter "no máximo" 20 elementos, então eu vou
	 * "perguntar" essa informação ao "usuário" */
	int conj=0;
	do {
		scanf("%d",&conj);
	} while (conj < 0 || conj > 20);
	float A[conj], Quadrado[conj];
	for ( int i=0; i<conj; i++ ) {
		scanf("%f",&A[i]);
		Quadrado[i]=A[i]*A[i];
	}
	for ( int j=0; j<conj; j++ ) {
		printf("%f ",A[j]);
	}
	putchar('\n');
	for ( int k=0; k<conj; k++ ) {
		printf("%f ",Quadrado[k]);
	}
	putchar('\n');
	return 0;
}
