#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x, y;

   scanf("%d %d", &x, &y);
   int *p1, *p2;

   p1 = &x;
   p2 = &y;
   p1 < p2 ? printf("%d\n", *p1) : printf("%d\n", *p2);
   return(0);
}
