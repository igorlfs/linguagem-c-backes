#include <stdio.h>
#include <stdlib.h>
int main () {
	float mat[5][5];
	for ( int i=0; i<5; i++ ) {
		for ( int j=0; j<5; j++ ) {
			scanf("%f",&mat[i][j]);
		}
	}
	float soma=0;
	for ( int i=0; i<5; i++ ) {
		for ( int j=0; j<5; j++ ) {
			if ( i<j )
				soma+=mat[i][j];
		}
	}
	printf("Soma acima da diagonal principal: %f\n",soma);
	return 0;
}
