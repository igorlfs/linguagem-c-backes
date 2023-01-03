#include <stdio.h>
#include <stdlib.h>
int main () {
	int mat[5][5];
	for ( int i=0; i<5; i++ ) {
		for ( int j=0; j<5; j++ ) {
			if ( i==j )
				mat[i][j]=1;
			else
				mat[i][j]=0;
		}
	}
	for ( int i=0; i<5; i++ ) {
		for ( int j=0; j<5; j++ ) {
			printf("%d ",mat[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
