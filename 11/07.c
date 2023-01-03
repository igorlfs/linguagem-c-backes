#include <stdio.h>
#include <stdlib.h>
void retorna(int *p, int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("%d ", *(p + i));
   }
   putchar('\n');
}

int main()
{
   int n;

   scanf("%d", &n);
   int *p = (int *)malloc(n * sizeof(int));

   for (int i = 0; i < n; i++)
   {
      *(p + i) = i;
   }

   retorna(p, n);
   free(p);

   return(0);
}
