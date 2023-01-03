#include <stdio.h>
#include <stdlib.h>
int bin(int n);
int ten(int n);

int i = 0;
int b = 0;

int main()
{
   int n;

   scanf("%d", &n);
   printf("%d\n", bin(n));
   return(0);
}

int bin(int n)
{
   if (n == 0)
   {
      return(b);
   }
   else
   {
      b += (n % 2) * ten(i);
      i++;
   }
   return(bin(n / 2));
}

int ten(int n)
{
   if (n == 0)
   {
      return(1);
   }
   else
   {
      return(10 * ten(--n));
   }
}
