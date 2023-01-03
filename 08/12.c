#include <stdio.h>
#include <stdlib.h>

enum semana { domingo=1, segunda, terca, quarta, quinta, sexta, sabado };

int main () {
	char week[7][10]={"domingo","segunda","terca","quarta","quinta","sexta","sabado"};
	int d;
	scanf("%d",&d);
	d+=-1;
	for (int i=0; i<7; i++)
		if (d%7==i)
			printf("%s\n",week[i]);
	return 0;
}
