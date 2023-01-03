#include <stdio.h>
#include <stdlib.h>
int menor(int *v, int n);
int min(int x, int y);

int main()
{
   int n;

   scanf("%d", &n);
   int v[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &v[i]);
   }
   printf("%d\n", menor(v, n));
   return(0);
}

int menor(int *v, int n)
{
   if (n == 0)
   {
      return(v[0]);
   }
   else
   {
      return(min(v[n - 1], menor(v, n - 1)));
   }
}

int min(int x, int y)
{
   if (x < y)
   {
      return(x);
   }
   else
   {
      return(y);
   }
}
