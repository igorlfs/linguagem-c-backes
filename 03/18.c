#include <stdio.h>
#include <stdlib.h>
int main () {
	int a,b;
	scanf("%d %d",&a,&b);
	/* O '>>' é pra esquerda! */
	printf("Direita: %d\nEsquerda: %d\n",a<<b,a>>b);
	return 0;
}
