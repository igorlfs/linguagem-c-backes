#include <stdio.h>
#include <stdlib.h>
int main () {
	int sal, prest;
	scanf("%d %d",&sal,&prest);
	if ( prest > sal/5 ) 
		printf ("Empréstimo não concedido.");
	else
		printf ("Empréstimo concedido.");
	return 0;
}
