#include <stdio.h>
#include <stdlib.h>
int main () {
	/* Essa é uma versão mais simples de um dos exercícios
	 * de laboratório. Em particular o 2 do lab 3 */
	int n,i,x0,x1,fib;
	scanf("%d",&n);
	x0=0;
	x1=1;
	if (n==0) 
		printf("0\n");
	if (n==1)
		printf("1\n");
	for(i=1;i<n;i++) {
		fib=x0+x1;
		x0=x1;
		x1=fib;
	}
	if (n>1)
		printf("%d\n",fib);
	return 0;
}
