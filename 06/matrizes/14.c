#include <stdio.h>
#include <stdlib.h>
int main () {
	float mat[5][5];
	for ( int i=0; i<5; i++ ) {
		for ( int j=0; j<5; j++ ) {
			scanf("%f",&mat[i][j]);
		}
	}
	float soma1=0,soma2=0;
	for ( int i=0; i<5; i++ ) {
		for ( int j=0; j<5; j++ ) {
			if ((i==j) || (j==(4-i)))
				soma1+=mat[i][j];
			else
				soma2+=mat[i][j];
		}
	}
	printf("A diferença das somas é: %f\n",soma1-soma2);
	return 0;
}
