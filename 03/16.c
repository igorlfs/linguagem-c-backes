#include <stdio.h>
#include <stdlib.h>
int main () {
	int a;
	scanf("%d",&a);
	/* O operador 'a<<b' desloca 'a', bit a bit, b unidades pra
	 * esquerda, o que equivale a multiplicar 'a' por 2^b.
	 * Por outro lado, o operador 'a>>b' desloca 'a', bit a bit,
	 * b unidades pra direita, o que equivale a dividir a por 2^b. */
	printf("%d %d\n",a<<1,a>>1);
	return 0;
}
