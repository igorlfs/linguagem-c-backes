#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n);
int main()
{
   int n;

   scanf("%d", &n);
   printf("%d\n", fibonacci(n));
   return(0);
}
int fibonacci(int n)
{
   if (n == 1)
   {
      return(0);
   }
   if (n == 2 || n == 3)
   {
      return(1);
   }
   else
   {
      return(fibonacci(n - 1) + fibonacci(n - 2));
   }
}

