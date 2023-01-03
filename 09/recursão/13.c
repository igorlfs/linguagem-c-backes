#include <stdio.h>
#include <stdlib.h>
float serie(int n);

int main()
{
   int n;

   scanf("%d", &n);
   printf("%f\n", serie(n));
   return(0);
}

float serie(int n)
{
   if (n == 0)
   {
      return(0);
   }
   else
   {
      return(((1.0 + n * n) / n) + serie(--n));
   }
}
