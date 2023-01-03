#include <stdio.h>
#include <stdlib.h>
int main () {
	int x;
	printf("Digite o número do dia da semana: ");
	scanf("%d",&x);
	switch (x) {
		case 1: printf("Domingo\n"); break;
		case 2: printf("Segunda\n"); break;
		case 3: printf("Terça\n"); break;
		case 4: printf("Quarta\n"); break;
		case 5: printf("Quinta\n"); break;
		case 6: printf("Sexta\n"); break;
		case 7: printf("Sábado\n"); break;
	}
	return 0;
}
