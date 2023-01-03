#include <stdio.h>
#include <stdlib.h>
int main () {
	float A[5][5],B[5][5]={0};
	for ( int i=0; i<5; i++ ) {
		for ( int j=0; j<5; j++ ) {
			scanf("%f",&A[i][j]);
		}
	}
	for ( int i=0; i<5; i++ ) {
		for ( int j=0; j<5; j++ ) {
			for (int k=0; k<5; k++) {
			B[i][j]+=A[i][k]*A[k][j];
			}
			
		}
	}
	for ( int i=0; i<5; i++ ) {
		for ( int j=0; j<5; j++ ) {
			printf("%.0f ",B[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
