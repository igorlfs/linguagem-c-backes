#include <stdio.h>
#include <stdlib.h>
int soma_cubos(int n);
int main() 
{
   int n;
   scanf("%d",&n);
   printf("%d\n",soma_cubos(n));
   return 0;
}
int soma_cubos(int n)
{
   if (n==1)
      return 1;
   else
    return(n*n*n+soma_cubos(n-1));
}
