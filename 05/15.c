#include <stdio.h>
#include <stdlib.h>
int main () {
	int n;
	int x,ma,me;
	ma=-1000;
	me=10000;
	do {
		scanf("%d",&n);
		if (n>ma)
			ma=n;
		if (n<me)
			me=n;
	} while (n>=0);
	/* Claramente, ele printa o negativo que precisa
	 * pra quitar, mas eu não sei se essa é a intenção */
	printf("Maior: %d\nMenor: %d\n",ma,me);
	return 0;
}
