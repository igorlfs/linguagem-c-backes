#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordenadas {
	float x;
	float y;
};
int main () {
	float dist;
	struct coordenadas ponto;
	scanf("%f %f",&ponto.x,&ponto.y);
	dist=sqrt(ponto.x*ponto.x+ponto.y*ponto.y);
	printf("%f\n",dist);
	return 0;
}
