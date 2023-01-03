#include <stdio.h>
#include <stdlib.h>
int main () {
	float mat[3][3];
	for ( int i=0; i<3; i++ ) {
		for ( int j=0; j<3; j++ ) {
			scanf("%f",&mat[i][j]);
		}
	}
	float menor=mat[0][0];
	for ( int i=0; i<3; i++ ) {
		for ( int j=0; j<3; j++ ) {
			if ( mat[i][j] < menor )
				menor=mat[i][j];
		}
	}
	printf("%f\n",menor);
	return 0;
}
