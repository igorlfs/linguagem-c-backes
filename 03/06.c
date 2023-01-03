#include <stdio.h>
#include <stdlib.h>
int main () {
	float K, M;
	printf("Digite uma velocidade em km/h: ");
	scanf("%f",&K);
	printf("Em metros por segundo é: %f",K/36);
	/* usando a fórmula do livro, né, que deve estar errada */
	return 0;
}
