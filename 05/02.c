#include <stdio.h>
#include <stdlib.h>
int main () {
	int n,i;
	scanf("%d",&n);
	for (i=n;i>=0;i--) {
		printf("%d ",i);
	}
	// muda de linha
	putchar('\n');
	return 0;
}
