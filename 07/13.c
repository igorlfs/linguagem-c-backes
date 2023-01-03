#include <stdio.h>
#include <stdlib.h>
int main () {
	char str[64];
	fgets(str, 64, stdin);
	long unsigned int a,b;
	scanf("%ld",&a);
	scanf("%ld",&b);
	if (a<b) {
		for (; a<=b; a++) 
			printf("%c",str[a]);
	}
	else {
		for (; b<=a; b++) 
			printf("%c",str[b]);
	}
	putchar('\n');
	return 0;
}
