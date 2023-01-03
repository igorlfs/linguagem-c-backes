#include <stdio.h>
#include <stdlib.h>
int main () {
	float X[10];
	int negativos=0;
	float soma=0;
	for ( int i=0; i<10; i++ ) {
		scanf("%f",&X[i]);
		if ( X[i] < 0 )
			negativos++;
		if ( X[i] > 0 )
			soma=X[i]+soma;
	}
	printf("Negativos: %d\nSoma dos positvos: %f\n",negativos,soma);
	return 0;
}
