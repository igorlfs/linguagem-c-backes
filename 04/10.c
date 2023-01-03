#include <stdio.h>
#include <stdlib.h>
int main () {
	float x,y,z, media;
	printf("Digite os três números: ");
	scanf("%f %f %f",&x,&y,&z);
	printf("Escolha um tipo de média: ");
	scanf("%f",&media);
	if ( media == 1) {
		printf("%f\n",x*y*z);
		// Tá faltando uma raiz cúbica aí...
	} else if ( media == 2) {
		float pond;
		pond=((x+2*y+3*z)/6);
		printf("%f\n",pond);
	} else if ( media == 3) {
		float harm;
		harm=1/(1/x+1/y+1/z);
		printf("%f\n",harm);
	} else if ( media == 4) {
		printf("%f\n",(x+y+z)/3);
	}
	return 0;
}
