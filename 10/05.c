#include <stdio.h>
#include <stdlib.h>
int main()
{
   int  arr[5];
   int *p = &arr[0];

   for (int i = 0; i < 5; i++)
   {
      scanf("%d", (p + i));
      printf("%d\n", 2 * *(p + i));
   }
   return(0);
}
