#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
};

struct retangulo {
	struct ponto p0;
	struct ponto p1;
} ret;

int main () {

	struct ponto p2;

	scanf("%f %f",&ret.p0.x,&ret.p0.y);
	do {
		scanf("%f %f",&ret.p1.x,&ret.p1.y);
	} while ( ret.p1.x <= ret.p0.x || ret.p1.y >= ret.p0.y);
	scanf("%f %f",&p2.x,&p2.y);

	if (p2.x > ret.p0.x && p2.x < ret.p1.x && p2.y < ret.p0.y && p2.y > ret.p1.y)
		printf("Está no retângulo!\n");
	else
		printf("NÃO Está no retângulo!\n");

	return 0;
}
