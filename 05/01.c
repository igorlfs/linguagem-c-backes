#include <stdio.h>
#include <stdlib.h>
int main () {
	int n,i;
	scanf("%d",&n);
	for (i=0;i<=n;i++) {
		printf("%d ",i);
	}
	// muda de linha
	putchar('\n');
	return 0;
}
