#include <stdio.h>
#include <stdlib.h>
int main () {
	int A[10];
	int par=0;
	for ( int i=0; i<10; i++ ) {
		scanf("%d",&A[i]);
		if ( (A[i] % 2)==0 )
			par++;
	}
	printf("%d\n",par);
	return 0;
}
