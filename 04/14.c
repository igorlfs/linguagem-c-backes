#include <stdio.h>
#include <stdlib.h>
int main () {
	int x;
	scanf("%d",&x);
	if ((x%3)==0 && (x%5)!=0)
		printf("%d é uma das soluções desse problema\n",x);
	else if ((x%5)==0 && (x%3)!=0)
		printf("%d é uma das soluções desse problema\n",x);
	return 0;
}
