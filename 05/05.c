#include <stdio.h>
#include <stdlib.h>
int main () {
	/* Não precisa usar 'for' para resolver esse exercício
	 * Posso usar soma de PA, mas pra propósitos de estudo... */
	int i,soma;
	for(i=0,soma=0;i<50;i++) {
		soma=2*i+soma;
	}
	printf("Soma é %d\n",soma);
	return 0;
}
