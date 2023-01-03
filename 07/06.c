#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	char str[64],c;
	fgets(str, 64, stdin);
	char vogal=0;
	c=getchar();
	for (int i=0; i<strlen(str); i++) {
		if ( str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str [i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str [i]=='U' ) {
			vogal++;
			str[i]=c;
		}
	}
	fputs(str, stdout);
	printf("Vogais: %d\n",vogal);
	return 0;
}
