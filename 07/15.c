#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	char str[64],str2[64];
	fgets(str, 64, stdin);
	fgets(str2, 64, stdin);
	for (int i=0; str[i]!='\0';) {
		if (str[i]<str2[i])  {
			fputs(str, stdout);
			fputs(str2, stdout);
			break;
		}
		else if (str[i]>str2[i])  {
			fputs(str2, stdout);
			fputs(str, stdout);
			break;
		}
		else
			i++;
	}
	return 0;
}
