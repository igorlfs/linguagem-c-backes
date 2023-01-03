#include <stdio.h>
#include <stdlib.h>
int main () {
	/* Esse provavelmente não é o programa ideal, mas é pq eu não sei
	 * comparar uma string (ao invés de um número) usando if/switch
	 * então preciso fazer a conversão antes */
	float valor;
	int x;
	printf("Digite o valor do produto sem impostos: ");
	scanf("%f",&valor);
	printf("Digite o número do seu estado:\nMG=0\nSP=1\nRJ=2\nMS=3\n");
	scanf("%d",&x);
	switch ( x ) {
		case 0: printf("O preço total é %.0f\n",valor*107/100);
			  break;
		case 1: printf("O preço total é %.0f\n",valor*112/100);
			  break;
		case 2: printf("O preço total é %.0f\n",valor*115/100);
			  break;
		case 3: printf("O preço total é %.0f\n",valor*108/100); 
			  break;
		default: printf("Erro.\n"); 
	}
	return 0;
}
