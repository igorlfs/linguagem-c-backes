#include <stdio.h>
#include <stdlib.h>
int main()
{
   int  arr[5];
   int *p = &arr[0];

   for (int i = 0; i < 5; i++)
   {
      scanf("%d", (p + i));
      if (*(p + i) % 2 == 0)
      {
         printf("%p\n", (p + i));
      }
   }
   return(0);
}
