#include <stdio.h>
#include <stdlib.h>
int main () {
	int A[100];
	int n=1;
	for ( int i=0; i<100; i++ ) {
		if ( (n % 7)!=0)
			A[i]=n;
		else {
		n++;
		A[i]=n;
		}
		n++;
	}
	for ( int j=0; j<100; j++ ) {
		printf("%d ",A[j]);
	}
	return 0;
}
