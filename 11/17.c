#include <stdio.h>
#include <stdlib.h>
int *scol(int **A, int n)
{
   int *B = calloc(n, sizeof(int));

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         for (int k = 0; k < n; k++)
         {
            if (j == k)
            {
               B[k] += A[i][j];
            }
         }
      }
   }
   return(B);
}

int main()
{
   int n;

   scanf("%d", &n);
   int **A = (int **)malloc(sizeof(int *) * n);

   for (int i = 0; i < n; i++)
   {
      A[i] = (int *)malloc(sizeof(int) * n);
      for (int j = 0; j < n; j++)
      {
         scanf("%d", &A[i][j]);
      }
   }
   int *S;

   S = scol(A, n);
   for (int i = 0; i < n; i++)
   {
      printf("%d ", S[i]);
   }
   putchar('\n');
   return(0);
}
