#include <stdio.h>
#include <stdlib.h>
float harmonica(int n);

int main()
{
   int n;

   scanf("%d", &n);
   printf("%f\n", harmonica(n));
   return(0);
}

float harmonica(int n)
{
   if (n == 0)
   {
      return(0);
   }
   else
   {
      return((1.0 / n) + harmonica(--n));
   }
}
