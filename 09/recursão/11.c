#include <stdio.h>
#include <stdlib.h>
int s = 0;
int inverte(int n);

int main()
{
   int n;

   scanf("%d", &n);
   printf("%d\n", inverte(n));
   return(0);
}

int inverte(int n)
{
   if (n)
   {
      s = s * 10 + n % 10;
      return(inverte(n / 10));
   }
   else
   {
      return(s);
   }
}
