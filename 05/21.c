#include <stdio.h>
#include <stdlib.h>
int main () {
	int n,a;
	float i,ma,s;
	scanf("%d",&n);
	ma=-2097152;
	for (i=0,a=1;i<n;i++) {
		scanf("%f",&s);
		if ( s > ma ) {
			ma=s;
		}
		else if ( s == ma ) {
			a++;
		}
	}
	printf("O maior é %f\nApareceu %d vezes!\n",ma,a);
	return 0;
}
