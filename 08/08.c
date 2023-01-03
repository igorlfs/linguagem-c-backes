#include <stdio.h>
#include <stdlib.h>

struct idade {
	char nome [64];
	unsigned int dia;
	unsigned int mes;
	int ano;
};

int main () {
	struct idade ida[6];
	struct idade jovem;
	struct idade velho;
	int i;
	for (i=0; i<6; i++)
	{
		do {
			scanf("%s %d/%d/%d",ida[i].nome,&ida[i].dia,&ida[i].mes,&ida[i].ano);
		} while ( ida[i].mes > 12 && ida[i].dia > 31);
	}
	jovem=ida[0];
	velho=ida[0];
	for (i=1; i<6; i++)
		if ( ida[i].ano > jovem.ano )
			jovem=ida[i];
		else if ( ida[i].ano < velho.ano )
			velho=ida[i];
		else if ( ida[i].ano == jovem.ano )
			if ( ida[i].mes > jovem.mes )
				jovem=ida[i];
			else if ( ida[i].mes < velho.mes )
				velho=ida[i];
			else if ( ida[i].mes == jovem.mes )
				if ( ida[i].dia > jovem.dia )
					jovem=ida[i];
				else if ( ida[i].dia < velho.dia )
					velho=ida[i];
	printf("+Nova: %s\n+Velha: %s\n",jovem.nome,velho.nome);
	return 0;
}
