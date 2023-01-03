#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
	int X, i, r;
	printf("Digite o número: ");
	scanf("%d",&X);
	if (X>1) {
		for (i=2;;i++) {
			if (X==2) {
				printf("%d é primo\n",X);
				break;
			} else if ((X%i)==0) {
				printf("%d NÃO é primo\n",X);
				break;
			} else if ( i > (sqrt(X))) {
				printf("%d é primo\n",X);
				break;
			}
		}
	}
	return 0;
}
