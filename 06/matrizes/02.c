#include <stdio.h>
#include <stdlib.h>
int main () {
	float mat[4][4];
	for ( int i=0; i<4; i++ ) {
		for ( int j=0; j<4; j++ ) {
			scanf("%f",&mat[i][j]);
		}
	}
	float maior=mat[0][0];
	int linha=0,coluna=0;
	for ( int i=0; i<4; i++ ) {
		for ( int j=0; j<4; j++ ) {
			if ( mat[i][j] > maior ) {
				maior=mat[i][j];
				linha=i;
				coluna=j;
			}
		}
	}
	printf("Maior:%f\nPosição:%d %d\n",maior,linha+1,coluna+1);
	return 0;
}
