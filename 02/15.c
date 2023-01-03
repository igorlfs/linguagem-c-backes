#include <stdio.h>
#include <stdlib.h>
int main () {
	char x;
	int y;
	float z;
	scanf("%c %d %f", &x, &y, &z);
	printf("%c %d %f", x, y, z);
	printf("%c\t%d\t%f\t", x, y, z);
	printf("%c\n%d\n%f\n", x, y, z);
	return 0;
}
