#include <stdio.h>
#include <stdlib.h>
int main () {
	int graus;
	float rad;
	printf("leia em graus: ");
	scanf("%d",&graus);
	rad=graus*3.141592/180;
	printf("em rad vc tem %f\n",rad);
	return 0;
}
