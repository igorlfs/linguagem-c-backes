#include <stdio.h>
#include <stdlib.h>
int main () {
	float i,p,maior,menor;
	maior=-9999;
	menor=9999;
	for (i=0;i<10;i++) {
		scanf("%f",&p);
		if ( p > maior)
			maior=p;
		if ( p < menor)
			menor=p;
	}
	printf("Menor valor lido:%.f\nMaior valor lido:%.f\n",menor,maior);
	return 0;
}
