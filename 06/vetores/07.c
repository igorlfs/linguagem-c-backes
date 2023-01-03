#include <stdio.h>
#include <stdlib.h>
int main () {
	float X[10];
	float maior=-400000000;
	float menor=400000000;
	for ( int i=0; i<10; i++ ) {
		scanf("%f",&X[i]);
		if ( X[i] > maior )
			maior=X[i];
		if ( X[i] < menor )
			menor=X[i];
	}
	printf("Maior: %f\nMenor: %f\n",maior,menor);
	return 0;
}
