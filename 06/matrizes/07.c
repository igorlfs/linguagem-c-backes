#include <stdio.h>
#include <stdlib.h>
int main () {
	float mat[3][3];
	for ( int i=0; i<3; i++ ) {
		for ( int j=0; j<3; j++ ) {
			scanf("%f",&mat[i][j]);
		}
	}
	float soma=0;
	for ( int i=0; i<3; i++ ) {
		for ( int j=0; j<3; j++ ) {
			if ( j==(2-i) )
				soma+=mat[i][j];
		}
	}
	printf("Soma diagonal secundária: %f\n",soma);
	return 0;
}
