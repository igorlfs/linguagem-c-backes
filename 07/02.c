#include <stdio.h>
#include <stdlib.h>
int main () {
	char str[64];
	fgets(str, 64, stdin);
	for (int i=0; i<4; i++) {
	printf("%c",str[i]);
	}
	putchar('\n');
	return 0;
}
