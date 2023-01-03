#include <stdio.h>
#include <stdlib.h>

enum compras { escova=1, fio, sabao, lenco };

int main () {
	char itens[4][7]={"escova","fio","sabado","lenco"};
	float preco[4];
	for (int i=0; i<4; i++)
		if (i%2==0)
			preco[i]=200;
		else 
			preco[i]=50;

	int d;
	scanf("%d",&d);
	d+=-1;
	for (int i=0; i<4; i++)
		if (d%4==i)
			printf("%s %.2f\n",itens[i],preco[i]);
	return 0;
}
