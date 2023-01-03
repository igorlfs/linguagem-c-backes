#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double taylor(double n);
double pot(double x,int y );
long long int fatorial (long long int n);

int main()
{
   double x;

   scanf("%lf", &x); // Não calcula, de fato, taylor(x);
   printf("%lf\n", taylor(M_PI));
   return(0);
}

double taylor(double x)
{
   double s = 0;
   float u=1;
   for (int n=0; n<=5; n++)
   {
      s+=u*pot(x,2*n)/fatorial(2*n);
      u=u*-1;
   }
   return(s);
}

double pot(double x,int y )
{
   if (y==0)
      return 1;
   else
   {
      y-=1;
      return (x*pot(x,y));
   }
}

long long int fatorial (long long int n)
{
   if (n==1 || n==0)
      return 1;
   else
    return(n*fatorial(n-1));
}
