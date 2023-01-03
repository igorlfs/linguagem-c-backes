#include <stdio.h>
#include <stdlib.h>
float media(int v[], int n);
int main() 
{
   int n;
   scanf("%d",&n);
   int v[n];
   for (int i=0; i<n; i++)
   {
      scanf("%d",&v[i]);
   }
   printf("%.2f\n",media(v,n));
   return 0;
}
float media(int v[], int n)
{
   if (n==1)
   {
      return v[n-1];
   }
   return((v[n-1]+(n-1)*media(v,n-1))/n);
}
