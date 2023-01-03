#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x, y, *p1, *p2;

   p1 = &x;
   p2 = &y;
   p1 < p2 ? printf("%p\n", p2) : printf("%p\n", p1);
   return(0);
}
