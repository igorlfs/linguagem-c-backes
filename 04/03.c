#include <stdio.h>
#include <stdlib.h>
int main () {
	int a;
	scanf("%d",&a);
	if ( a % 2 == 0 )
		printf("%d é par\n",a);
	else 
		printf("%d é ímpar\n",a);
	return 0;
}
