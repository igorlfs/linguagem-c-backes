#include <stdio.h>
#include <stdlib.h>
int soma(int n);
int main() 
{
   int n;
   scanf("%d",&n);
   printf("%d\n",soma(n));
   return 0;
}
int soma(int n)
{
   int s;
   s=n*(n+1)/2;
   return s;
}
