#include <stdlib.h>
#include <stdio.h>
void maior_menor(int *v, int n);

int main()
{
   int n;

   scanf("%d", &n);
   int v[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &v[i]);
   }
   maior_menor(v, n);
   return(0);
}

void maior_menor(int *v, int n)
{
   int ma = v[0], m = 1;

   for (int i = 1; i < n; i++)
   {
      if (v[i] > ma)
      {
         ma = v[i];
         m  = 1;
      }
      else if (v[i] == ma)
      {
         m++;
      }
   }
   printf("Maior: %d\nQuantidade de Vezes: %d\n", ma, m);
}
