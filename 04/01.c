#include <stdio.h>
#include <stdlib.h>
int main () {
	int a, b;
	scanf("%d %d",&a,&b);
	if ( a > b)
		printf("O maior é %d\n",a);
	else 
		printf("O maior é %d\n",b);
	return 0;
}
