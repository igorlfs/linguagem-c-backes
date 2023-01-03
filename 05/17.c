#include <stdio.h>
#include <stdlib.h>
int main () {
	int l,i,n,h,a;
	scanf("%d",&n);
	for (i=1,h=0;i<=n;i++) {
		for (a=0;a<i;a++) {
			printf("%d ",h+1);
			h++;
		}
		putchar('\n');
	}
	return 0;
}
