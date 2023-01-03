#include <stdio.h>
#include <stdlib.h>
void ordena(int *v, int n);
int main() 
{
   int n;
   scanf("%d",&n);
   int v[n];
   for (int i=0; i<n; i++)
   {
      scanf("%d",&v[i]);
   }
   ordena(v,n);
   return 0;
}
void ordena(int *v, int n)
{
   int *temp=calloc(sizeof(int),n);
   int a[n];
   for (int i=0; i<n; i++)
   {
      a[i]=v[i];
      for (int j=0; j<n; j++)
      {
         if (v[i] > v[j])
            temp[i]++;
      }
   }
   for (int i=0; i<n; i++)
   {
      for (int j=0; j<n; j++)
      {
         if (temp[i]==j)
            v[j]=a[i];
      }
   }
   for (int i=0; i<n; i++)
   {
      printf("%d ",v[i]);
   }
   putchar('\n');
   free(temp);
}
