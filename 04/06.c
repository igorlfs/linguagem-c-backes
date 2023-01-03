#include <stdio.h>
#include <stdlib.h>
int main () {
	float sexo, h;
	printf("Digite 1 zero for mulher, 0 se não for: ");
	scanf("%f",&sexo);
	printf("Digite sua altura: ");
	scanf("%f",&h);
	if (sexo)
		printf("Seu peso ideal é %f kg\n",(62.7*h)-44.7);
	else 
		printf("Seu peso ideal é %f kg\n",(72.7*h)-58);
	return 0;
}
