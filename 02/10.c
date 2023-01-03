#include <stdio.h>
#include <stdlib.h>
int main (void) {
	int x,y,z;
	printf("In what year where you born?\n");
	scanf("%d",&x);
	printf("Which month of said year?\n");
	scanf("%d",&y);
	printf("Last but not least, day of said month?\n");
	scanf("%d",&z);
	printf("Your date of birth is %d/%d/%d\n", z,y,x);
	return 0;
}
