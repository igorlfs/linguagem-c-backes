#include <stdio.h>
#include <stdlib.h>
int main () {
	float A[8];
	for ( int i=0; i<8; i++) {
		scanf("%f",&A[i]);
	}
	int x,y;
	do {
		scanf("%d",&x);
		scanf("%d",&y);
	} while ((( x > 7) || (x < 0)) && (( y > 7) || ( y < 0)));
	printf("%f\n",A[x]+A[y]);
	return 0;
}
