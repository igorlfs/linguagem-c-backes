#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;

   do
   {
      scanf("%d", &n);
   } while (n < 1);
   int *p = malloc(n * sizeof(int));

   for (int i = 0; i < n; i++)
   {
      do
      {
         scanf("%d", &p[i]);
      } while (p[i] < 2);
   }
   free(p);
   return(0);
}
