#include <stdio.h>
#include <stdlib.h>
int **matriz(int n)
{
   if (n <= 0)
   {
      return(NULL);
   }
   else
   {
      int **mat = malloc(sizeof(int *) * n);
      for (int i = 0; i < n; i++)
      {
         mat[i] = malloc(sizeof(int) * n);
      }
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            if (i == n-(j+1))
            {
               mat[i][j] = 1;
            }
            else
            {
               mat[i][j] = 0;
            }
         }
      }
      return(mat);
   }
}

int main()
{
   int n;

   scanf("%d", &n);
   int **M = matriz(n);

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         printf("%d ", M[i][j]);
      }
      putchar('\n');
   }
   for (int i = 0; i < n; i++)
   {
      free(M[i]);
   }
   free(M);
   return(0);
}
