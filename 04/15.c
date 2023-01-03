#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
	float a, b, c;
	printf("Insira os coeficientes da equação: ");
	scanf("%f %f %f",&a,&b,&c);
	if ( a == 0) {
 	printf("Não é equação de segundo grau.\n");
	} else {
		float delta;
		delta=b*b-4*a*c;
		float x1,x2;
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;
		if ( delta < 0 ) {
			printf("Não existem raízes reais\n");
		} else if ( delta == 0 ) {
			printf("%f\nRaiz única\n",x1);
		} else {
			printf("%f %f\n",x1,x2);
		}
	}
	return 0;
}
