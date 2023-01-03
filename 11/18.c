#include <stdio.h>
#include <stdlib.h>
int **le(int i, int *n, int *m)
{
   printf("Dê as dimensões da %dª matriz: ", i + 1);
   scanf("%d %d", n, m);
   int **M;

   M = (int **)malloc(sizeof(int *) * *n);
   for (int i = 0; i < *m; i++)
   {
      M[i] = (int *)calloc(*n, sizeof(int));
   }
   printf("Dê as entradas da %dª matriz: \n", i + 1);
   for (int i = 0; i < *n; i++)
   {
      for (int j = 0; j < *m; j++)
      {
         scanf("%d", &M[i][j]);
      }
   }
   printf("--------------------\n");
   return(M);
}

int **prod(int **A, int a1, int a2, int **B, int b1, int b2)
{
   if (a2 != b1)
   {
      return(NULL);
   }
   else
   {
      int **C;

      C = (int **)malloc(sizeof(int *) * a1);
      for (int i = 0; i < b2; i++)
      {
         C[i] = (int *)calloc(b2, sizeof(int));
      }
      for (int i = 0; i < a1; i++)
      {
         for (int j = 0; j < b2; j++)
         {
            for (int k = 0; k < a2; k++)
            {
               C[i][j] += A[i][k] * B[k][j];
            }
         }
      }
      return(C);
   }
}

int main()
{
   int **A, **B, **C;
   int   a1, a2, b1, b2;

   A = le(0, &a1, &a2);
   B = le(1, &b1, &b2);
   C = prod(A, a1, a2, B, b1, b2);

   for (int i = 0; i < a1; i++)
   {
      for (int j = 0; j < b2; j++)
      {
         printf("%d ", C[i][j]);
      }
      putchar('\n');
   }
   return(0);
}
