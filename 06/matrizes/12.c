#include <stdio.h>
#include <stdlib.h>
int main () {
	float mat[6][6];
	for ( int i=0; i<6; i++ ) {
		for ( int j=0; j<6; j++ ) {
			scanf("%f",&mat[i][j]);
		}
	}
	float soma=0;
	for ( int i=0; i<6; i++ ) {
		for ( int j=0; j<6; j++ ) {
			if ( i>j )
				soma+=mat[i][j];
		}
	}
	printf("Soma abaixo da diagonal principal: %f\n",soma);
	return 0;
}
