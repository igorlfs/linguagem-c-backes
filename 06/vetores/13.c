#include <stdio.h>
#include <stdlib.h>
int main () {
	float A[10];
	for ( int i=0; i<10; i++ ) 
	{
repita:
		printf("Dê a entrada %d: ",i+1);
		scanf("%f",&A[i]);
		for (int j=i-1; j>=0; j--) 
		{
			while ( A[i]==A[j] ) 
			{
				printf("Vc repetiu a entrada %d\n",i+1);
				goto repita;
			}
		}
	}
	for ( int k=0; k<10; k++) 
	{
		printf("%.0f ",A[k]);
	}
	putchar('\n');
	return 0;
}
