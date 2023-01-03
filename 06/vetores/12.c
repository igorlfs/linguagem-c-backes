#include <stdio.h>
#include <stdlib.h>
int main () {
	/* Seria interessante fazer uma versão com 
	 * char ao invés de float */
	float A[10];
	for ( int i=0; i<10; i++ ) {
		scanf("%f",&A[i]);
	}
	for ( int j=0; j<10; j++ ) {
		for (int k=0; k<j; k++) {
			if ( A[j]==A[k] )
				printf("%f ",A[j]);
		}
	}
	putchar('\n');
	return 0;
}
