#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordenadas {
	float x;
	float y;
};
int main () {
	float distx, disty, dist;
	struct coordenadas p[2];
	scanf("%f %f",&p[0].x,&p[0].y);
	scanf("%f %f",&p[1].x,&p[1].y);
	distx=p[1].x-p[0].x;
	disty=p[1].y-p[0].y;
	dist=sqrt(distx*distx+disty*disty);
	printf("%f\n",dist);
	return 0;
}
