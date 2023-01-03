#include <stdio.h>
#include <stdlib.h>
int main () {
	int n;
	float i,sum;
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++) {
		sum=(1/i)+sum;
	}
	printf("Hn é %f\n",sum);
	return 0;
}
