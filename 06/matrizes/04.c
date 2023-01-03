#include <stdio.h>
#include <stdlib.h>
int main () {
	float mat[4][4];
	for ( int i=0; i<4; i++ ) {
		for ( int j=0; j<4; j++ ) {
			scanf("%f",&mat[i][j]);
		}
	}
	int grande=0;
	for ( int i=0; i<4; i++ ) {
		for ( int j=0; j<4; j++ ) {
			if ( mat[i][j] > 10 )
				grande++;
		}
	}
	printf("Maiores que 10: %d\n",grande);
	return 0;
}
