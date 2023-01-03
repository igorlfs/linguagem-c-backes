#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
	float a, b, h;
	scanf("%f %f",&a,&b);
	h=sqrt(a*a+b*b);
	printf("%f\n",h);
	return 0;
}
