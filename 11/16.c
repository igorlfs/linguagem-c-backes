#include <stdio.h>
#include <stdlib.h>
int *prod(int **a, int n, int *b)
{
   int *c = malloc(sizeof(int *) * n);

   for (int i = 0; i < n; i++)
   {
      int soma = 0;
      for (int j = 0; j < n; j++)
      {
         soma += a[i][j] * b[j];
      }
      c[i] = soma;
   }
   for (int i = 0; i < n; i++)
   {
      printf("%d ", c[i]);
   }
   return(c);
}

int main()
{
   int n;

   scanf("%d", &n);
   int **M;

   M = (int **)malloc(sizeof(int *) * n);
   for (int i = 0; i < n; i++)
   {
      M[i] = (int *)malloc(sizeof(int) * n);
      for (int j = 0; j < n; j++)
      {
         M[i][j] = i + j;
      }
   }
   int *v;

   v = (int *)malloc(sizeof(int) * n);
   for (int i = 0; i < n; i++)
   {
      *(v + i) = i;
   }
   int *P = prod(M, n, v);

   putchar('\n');
   free(P);
   return(0);
}
