#include <stdio.h>
#include <stdlib.h>

enum meses { janeiro=1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro };

int main () {
	char month[12][10]={ "janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro" };
	int dias[12];
	for (int i=0; i<12; i++)
		if (i%2==0 && i<7)
			dias[i]=31;
		else if (i%2==1 && i>6)
			dias[i]=31;
		else if (i==1)
			dias[i]=28;
		else
			dias[i]=30; 
	int d;
	scanf("%d",&d);
	d+=-1;
	for (int i=0; i<12; i++)
		if (d%12==i)
			printf("%s %d\n",month[i],dias[i]);
	return 0;
}
