#include <stdio.h>
#include <stdlib.h>
int main () {
	unsigned int x,i,sum;
	scanf("%d",&x);
	for(i=1,sum=0;i<x;i++) {
		if ( x%i == 0 )
			sum=i+sum;
	}
	printf("%d\n",sum);
	return 0;
}
