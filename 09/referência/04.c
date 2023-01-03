#include <stdio.h>
#include <stdlib.h>
int media_provas(int v[]);
int main() 
{
   int v[5];
   for (int i=0; i<5; i++)
   {
      scanf("%d",&v[i]);
   }
   printf("%d\n",media_provas(v));
   return 0;
}
int media_provas(int v[])
{
   int s=0;
   for (int i=0; i<5; i++)
   {
      s+=*(v+i);
   }
   return s/5;
}
