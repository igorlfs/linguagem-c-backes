#include <stdio.h>
#include <stdlib.h>
int main () {
	unsigned int x,i;
	scanf("%d",&x);
	for(i=1;i<=x;i++) {
		if ( x%i == 0 )
			printf("%d ",i);
	}
	putchar('\n');
	return 0;
}
