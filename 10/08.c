#include <stdio.h>
#include <stdlib.h>
void preenche(int *vet, int n)
{
   int *p = vet;

   for (int i = 0; i < n; i++)
   {
      *(p + i) = n;
   }
}

int main()
{
   int q;

   scanf("%d", &q);
   int v[q];

   preenche(v, q);
   return(0);
}
