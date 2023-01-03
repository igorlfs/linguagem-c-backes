#include <stdio.h>
#include <stdlib.h>
int main () {
	int A[10], B[10], C[10];
	for ( int i=0; i<10; i++ ) {
		scanf("%d",&A[i]);
	}
	for ( int j=0; j<10; j++ ) {
		scanf("%d",&B[j]);
		C[j]=A[j]-B[j];
	}
	for ( int k=0; k<10; k++ ) {
		printf("%d ",C[k]);
	}
	putchar('\n');
	return 0;
}
