#include <stdio.h>
#include <stdlib.h>
int main () {
	char str[64];
	fgets(str, 64, stdin);
	int i=0;
	for (; str[i]!='\0'; i++) {}
	printf("%d\n",i);
	return 0;
}
