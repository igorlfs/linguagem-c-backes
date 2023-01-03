#include <stdio.h>
#include <stdlib.h>
int main () {
	int mat[3][3];
	for ( int i=0; i<3; i++ ) {
		for ( int j=0; j<3; j++ ) {
			scanf("%d",&mat[i][j]);
		}
	}
	int vet[3]={0,0,0};
	for ( int i=0; i<3; i++ ) {
		for ( int j=0; j<3; j++ ) {
			vet[j]+=mat[i][j];
		}
	}
	for (int k=0; k<3; k++) {
		printf("%d ",vet[k]);
	}
	putchar('\n');
	return 0;
}
