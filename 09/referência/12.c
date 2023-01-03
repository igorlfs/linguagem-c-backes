#include <stdio.h>
#include <stdlib.h>
void somas(int *v, int n);
int main() 
{
   int n;
   scanf("%d",&n);
   int v[n];
   for (int i=0; i<n; i++)
   {
      scanf("%d",&v[i]);
   }
   somas(v,n);
   return 0;
}
void somas(int *v, int n)
{
   int odd=0, even=0;
   for (int i=0; i<n; i++)
   {
      if (v[i]%2==1)
         odd+=v[i];
      if (v[i]%2==0)
         even+=v[i];
   }
   printf("Pares: %d\nÍmpares: %d\n",even,odd);
}
