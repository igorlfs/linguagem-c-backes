#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void asterisco(int n);
int main() 
{
   int n;
   scanf("%d",&n);
   asterisco(n);

   return 0;
}
void asterisco(int n)
{
   for (int i=1; i<=2*n-1; i++)
   {
      if (i<=n)
      {
      for (int j=1; j<=i; j++)
         printf("*");
      }
      else {
      for (int j=2*n-i; j>=1; j--)
         printf("*");
      }
      putchar('\n');
   }
}
