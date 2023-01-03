#include <stdio.h>
#include <stdlib.h>
int main () {
	int i=0,j=0;
	float valores[5],soma=0;
	while (i<5)
	{
		scanf("%f",&valores[i]);
		soma=valores[i]+soma;
		++i;
	}
	while (j<5) 
	{
		printf("%f ",valores[j]);
		++j;
	}
	printf("%f\n",soma/5);
	return 0;
}
