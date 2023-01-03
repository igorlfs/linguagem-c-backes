#include <stdio.h>
#include <stdlib.h>

struct aluno {
	unsigned long int matricula;
	char nome[50];
	float p1;
	float p2;
	float p3;
};

int main () {
	int i;
	float media[5]={0,0,0,0,0};
	struct aluno a[5];
	for (i=0; i<5; i++)
	{
		scanf("%d %s %f %f %f",&a[i].matricula,a[i].nome,&a[i].p1,&a[i].p2,&a[i].p3);
		media[i]=(a[i].p1+a[i].p2+a[i].p3)/3;
	}
	float maiormedia=media[0];
	int maioraluno=0;
	for (i=0; i<5; i++)
		if (media[i] > maiormedia)
		{
			maiormedia=media[i];
			maioraluno=i;
		}
	printf("%s %.2f %.2f %.2f\n",a[maioraluno].nome,a[maioraluno].p1,a[maioraluno].p2,a[maioraluno].p3);
	return 0;
}
