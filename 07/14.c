#include <stdio.h>
#include <stdlib.h>
int main () {
	char str[64];
	fgets(str, 64, stdin);
	for (int i=0; str[i]!='\0'; i++ ) {
		if (str[i]>=97 && str[i]<=122) {
			str[i]=str[i]+3;
			if (str[i]>122)
				str[i]=((str[i]%122)+97);
		}
	}
	printf("%s",str);
	return 0;
}
