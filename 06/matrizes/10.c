#include <stdio.h>
#include <stdlib.h>
int main () {
	int mat[10][3],menor[10];
	for ( int i=0; i<10; i++ ) {
		for ( int j=0; j<3; j++ ) {
			scanf("%d",&mat[i][j]);
		}
		menor[i]=mat[i][0];
	}
	for ( int i=0; i<10; i++ ) {
		for ( int j=0; j<3; j++ ) {
			if (mat[i][j] <= menor[i]) {
				menor[i]=mat[i][j];
			}
		}
	}
	int nota1=0,nota2=0,nota3=0;
	for ( int i=0; i<10; i++ ) {
		if (menor[i]==1)
			nota1++;
		if (menor[i]==2)
			nota2++;
		if (menor[i]==3)
			nota3++;
	}
	printf("%d tiveram pior nota 1\n%d tiveram pior nota 2\n%d tiveram pior nota 3\n",nota1,nota2,nota3);
	return 0;
}
