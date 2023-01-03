#include <stdio.h>
#include <stdlib.h>

struct atleta {
	char nome[64];
	char esporte[64];
	unsigned int idade;
	float altura;
};

int main () {
	struct atleta a[5];
	struct atleta b[5];
	int ordem[5]={0,0,0,0,0};
	int i,j;
	for ( i=0; i<5; i++ )
		scanf("%s %s %d %f",a[i].nome,a[i].esporte,&a[i].idade,&a[i].altura);
	for ( i=0; i<5; i++ )
		for ( j=0; j<5; j++ )
			if ( (i!=j) && (a[i].idade > a[j].idade))
				ordem[i]++;
	for ( i=0; i<5; i++ )
		for ( j=0; j<5; j++ )
			if (ordem[j]==i)
				b[i]=a[j]; 
	for ( i=4; i>=0; i-- )
		printf("%s\n",b[i].nome);
	return 0;
}
