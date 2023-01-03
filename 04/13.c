#include <stdio.h>
#include <stdlib.h>
int main () {
	int x,y,op;
	printf("Escolha uma das operações:\n(1)Adição\n(2)Subtração\n(3)Produto\n(4)Resto na divisão\n");
	scanf("%d",&op);
	printf("Escolha os números x e y: ");
	scanf("%d %d",&x,&y);
	switch (op) {
		case 1: printf("%d\n",x+y); break;
		case 2: printf("%d\n",x-y); break;
		case 3: printf("%d\n",x*y); break;
		case 4: printf("%d\n",x%y); break;
		}
	return 0;
}
