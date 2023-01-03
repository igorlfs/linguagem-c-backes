#include <stdio.h>
#include <stdlib.h>
int main () {
	int n,prod;
	scanf("%d",&n);
	double i,sum;
	for (i=1,prod=1,sum=0;i<=n;i++) {
		sum=1/(i*prod)+sum;
		prod=(i*prod);
	}
	printf("Número e-1 é aproximadamente %lf\n",sum);
	return 0;
}
