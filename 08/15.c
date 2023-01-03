#include <stdio.h>
#include <stdlib.h>
union tipo {
	int x;
	char c;
};

int main () {
	union tipo t;
	scanf("%d",&t.x);
	printf("%c\n",t.c);
	return 0;
}
