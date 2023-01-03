#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	char str[64],bac[64];
	fgets(str, 64, stdin);
	int palin=0;
	for (int i=(strlen(str)-1); i>=0; i--) {
		bac[i]=str[i];
	}
	if (!strcmp(bac,str))
		printf("É palíndromo\n");
	else
		printf("Não é palíndromo\n");
	return 0;
}
