#include <stdio.h>
#include <stdlib.h>
int soma_vetor(int v[]);
int main() 
{
   int v[5];
   for (int i=0; i<5; i++)
   {
      scanf("%d",&v[i]);
   }
   printf("%d\n",soma_vetor(v));
   return 0;
}
int soma_vetor(int v[])
{
   int s=0;
   for (int i=0; i<5; i++)
   {
      s+=*(v+i);
   }
   return s;
}
