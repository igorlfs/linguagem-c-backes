#include <stdio.h>
#include <stdlib.h>
int main () {
	int a, b;
	scanf("%d %d",&a,&b);
	printf("Ou exclusivo: %d\nOu bit a bit: %d\nE bit a bit: %d\n",a^b,a|b,a&b);
	return 0;
}
