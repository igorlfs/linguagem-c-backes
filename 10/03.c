#include <stdio.h>
#include <stdlib.h>
int main()
{
   float  arr[10];
   float *p1 = &arr[0];

   for (int i = 0; i < 10; i++)
   {
      printf("%p ", (p1 + i));
   }
   putchar('\n');
   return(0);
}
