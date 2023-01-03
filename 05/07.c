#include <stdio.h>
#include <stdlib.h>
int main () {
	int i,p,soma;
	for (i=0,soma=0;i<10;i++) {
		scanf("%d",&p);
		soma=p+soma;
	}
	printf("%d\n",soma);
	return 0;
}
