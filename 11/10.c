#include <stdio.h>
#include <stdlib.h>
int *vetor(int n, int m)
{
   if (n<=0)
      return NULL;
   else {
      int *v=malloc(n*sizeof(int));
      for (int i=0; i<n; i++)
      {
         *(v+i)=m;
      }
      return v;
   }
}
int main() 
{
   int n;
   int m=1;
   scanf("%d",&n);
   vetor(n,m);
   return 0;
}
