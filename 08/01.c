#include <stdio.h>
#include <stdlib.h>

struct cadastro {
	char nome[50];
	unsigned int idade;
	char endereco[50];
};

int main () {
	struct cadastro pessoa;
	scanf("%s %d %s",pessoa.nome,&pessoa.idade,pessoa.endereco);
	printf("%s %d %s\n",pessoa.nome,pessoa.idade,pessoa.endereco);
	return 0;
}
