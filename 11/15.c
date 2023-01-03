#include <stdio.h>
#include <stdlib.h>
int *sum(int *a, int n, int *b)
{
   int *c = malloc(n * sizeof(int));

   for (int i = 0; i < n; i++)
   {
      c[i] = a[i] * b[i];
   }
   return(c);
}

int main()
{
   int n;

   scanf("%d", &n);
   int a[n];

   for (int i = 0; i < n; i++)
   {
      a[i] = i;
   }
   int b[n];

   for (int i = 0; i < n; i++)
   {
      b[i] = n - i;
   }
   int *d;
   d=sum(a, n, b);
   free(d);
   putchar('\n');
   return(0);
}
