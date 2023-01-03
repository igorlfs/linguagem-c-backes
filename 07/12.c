#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	char mercadoria[64];
	float valor;
	printf("Insira o nome da mercadoria: ");
	fgets(mercadoria, 64, stdin);
	printf("Insira o valor da mercadoria: ");
	scanf("%f",&valor);
	printf("Mercadoria: %sValor Total: %.2f\nValor do desconto: %.2f\nValor à vista: %.2f\n",mercadoria,valor,1*valor/10,9*valor/10);
	return 0;
}
