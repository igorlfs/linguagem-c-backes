#include <stdio.h>
#include <stdlib.h>
int main () {
	/* Programa Imperfeito. Não consegui olhar a data usando
	 * a biblioteca (time.h), então o programa precisa ser 
	 * atualizado "na mão" */
	int idade, mes, dia;
	printf("Insira sua idade: ");
	scanf("%d",&idade);
	printf("Insira o dia e o mês do seu aniversário: ");
	scanf("%d/%d",&dia,&mes);
	if ( mes > 8 ) 
		printf("Seu ano de nascimento é %d",2019-idade);
	else if (( mes = 8 ) && ( dia > 22)) 
		printf("Seu ano de nascimento é %d",2019-idade);
	else 
		printf("Seu ano de nascimento é %d",2020-idade);
	return 0;
}
