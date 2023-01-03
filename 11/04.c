#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;

   scanf("%d", &n);
   int *p = malloc(n * sizeof(int));

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &p[i]);
   }
   for (int i = 0; i < n; i++)
   {
      printf("%d\n", *(p + i));
   }
   free(p);
   return(0);
}
