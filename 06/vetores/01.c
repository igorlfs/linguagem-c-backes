#include <stdio.h>
#include <stdlib.h>
int main () {
	int valores[6],i=0,j=0;
	while (i<6)
	{
		scanf("%d",&valores[i]);
		++i;
	}
	while (j<6) 
	{
		printf("%d ",valores[j]);
		++j;
	}
	putchar('\n');
	return 0;
}
