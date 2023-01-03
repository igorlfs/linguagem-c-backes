#include <stdio.h>
#include <stdlib.h>
int main () {
	float A[10],B[10];
	int ordem[10];
	int=i,j;
	for ( i=0; i<10; i++ )
	{
		ordem[i]=0;
		scanf("%f",&A[i]);
	}
	for ( i=0; i<10; i++ )
		for ( j=0; j<10; j++ )
			if ( (i!=j) && (A[i] > A[j]))
				ordem[i]++;
	for ( i=0; i<10; i++ )
		for ( j=0; j<10; j++ )
			if (ordem[j]==i)
				B[i]=A[j];
	for ( i=0; i<10; i++ )
		printf("%.0f ",B[i]);
	putchar('\n');
	return 0;
}
