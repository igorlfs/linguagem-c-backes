#include <stdio.h>
#include <stdlib.h>
int main (void) {
	float y; // double simplesmente não funciona
	scanf("%f",&y);
	printf("%e\n",y);
	return 0;
}
