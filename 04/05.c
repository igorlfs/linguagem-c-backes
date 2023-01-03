#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
	float a;
	scanf("%f",&a);
	if ( a > 0) 
		printf("Quadrado: %f\nRaiz: %f\n",a*a,sqrt(a));
	return 0;
}
