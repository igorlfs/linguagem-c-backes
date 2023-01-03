#include <stdio.h>
#include <stdlib.h>

struct atleta {
	char nome[64];
	char esporte[64];
	unsigned int idade;
	float altura;
};

int main () {
	struct atleta a[5];
	struct atleta alto;
	struct atleta idoso;
	int i;
	for (i=0; i<5; i++)
		scanf("%s %s %d %f",a[i].nome,a[i].esporte,&a[i].idade,&a[i].altura);
	alto=a[0];
	idoso=a[0];
	for (i=0; i<5; i++)
	{
		if ( a[i].altura > alto.altura )
			alto=a[i];
		if ( a[i].idade > idoso.idade )
			idoso=a[i];
	}
	printf("Mais alto: %s\nMais velho: %s\n",alto.nome,idoso.nome);
	return 0;
}
