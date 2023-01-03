#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void exclama(int n);
int main() 
{
   int n;
   scanf("%d",&n);
   exclama(n);
   return 0;
}
void exclama(int n)
{
   for (int i=1; i<=n; i++)
   {
      for (int j=1; j<=i; j++)
         printf("!");
      putchar('\n');
   }
}
