#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
	float x;
	float y;
};

struct retangulo {
	struct ponto p0;
	struct ponto p1;
} ret;

int main () {

	float diag, x, y;

	scanf("%f %f",&ret.p0.x,&ret.p0.y);
	do {
		scanf("%f %f",&ret.p1.x,&ret.p1.y);
	} while ( ret.p1.x <= ret.p0.x || ret.p1.y >= ret.p0.y);

	x=(ret.p1.x-ret.p0.x);
	y=(ret.p0.y-ret.p1.y);
	diag=sqrt(x*x+y*y);

	printf("Área: %.2f\nDiagonal: %f\nPerímetro: %.2f\n",x*y,diag,2*x+2*y);
	return 0;
}
