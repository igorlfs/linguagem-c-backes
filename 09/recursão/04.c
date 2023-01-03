#include <stdio.h>
#include <stdlib.h>
void decrescente(int n);
int main() 
{
   int n;
   scanf("%d",&n);
   decrescente(n);
   return 0;
}
void decrescente(int n)
{
   if (n==0)
   {
      printf("%d\n",n);
      return;
   }
   printf("%d ",n);
   return(decrescente(n-1));
}
