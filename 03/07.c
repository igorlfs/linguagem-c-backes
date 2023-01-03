#include <stdio.h>
#include <stdlib.h>
int main () {
	float real,dolar;
	printf("Digite quantos reais quer converter: ");
	scanf("%f",&real);
	printf("Digite a cotação do dólar: ");
	scanf("%f",&dolar);
	printf("Em dólares vc tem %f\n",dolar/real);
	return 0;
}
