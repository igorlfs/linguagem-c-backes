#include <stdio.h>
#include <stdlib.h>
double euler(int x);
long long int fatorial (long long int n);

int main()
{
   int x;

   scanf("%d", &x); 
   printf("%lf\n", euler(x));
   return(0);
}

double euler(int x)
{
   double s = 0;
   for (int i=0; i<=x; i++)
   {
      s+=1.0/fatorial(i);
   }
   return(s);
}

long long int fatorial (long long int n)
{
   if (n==1 || n==0)
      return 1;
   else
    return(n*fatorial(n-1));
}
