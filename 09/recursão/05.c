#include <stdio.h>
#include <stdlib.h>
int soma(int v[], int n);
int main() 
{
   int n;
   scanf("%d",&n);
   int v[n];
   for (int i=0; i<n; i++)
   {
      scanf("%d",&v[i]);
   }
   printf("%d\n",soma(v,n));
   return 0;
}
int soma(int v[], int n)
{
   if (n<0)
   {
      return 0;
   }
   return(v[n]+soma(v,n-1));
}
