#include <stdio.h>
#include <stdlib.h>
int main () {
	char maius, minus;
	printf("Digite uma letra maiúscula: ");
	maius = getchar();
	minus = maius+32;
	printf("A minúscula é: %c\n",minus);
	return 0;
}
