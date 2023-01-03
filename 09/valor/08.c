#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int quadrado(int n)
{
   double p;
   p=sqrt(n);
   p=floor(p);
   if (n-p*p ==0)
      return 1;
   else
      return 0;
}
int main ()
{
   int n;
   scanf("%d",&n);
   printf("%d\n",quadrado(n));
}
