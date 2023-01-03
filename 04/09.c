#include <stdio.h>
#include <stdlib.h>
int main () {
	float h;
	int  w;
	printf("Digite sua altura e seu peso separados por um espaço: ");
	scanf("%f %d",&h,&w);
	if ( h < 1.20 ) {
		if ( w < 60 )
			printf ("Categoria A\n");
		else if ( w > 90 )
			printf ("Categoria G\n");
		else
			printf ("Categoria D\n");
	} else if ( h > 1.70 ) {
		if ( w < 60 )
			printf ("Categoria C\n");
		else if ( w > 90 )
			printf ("Categoria I\n");
		else
			printf ("Categoria F\n");
	} else
		if ( w < 60 )
			printf ("Categoria B\n");
		else if ( w > 90 )
			printf ("Categoria H\n");
		else
			printf ("Categoria E\n");
	return 0;
}
