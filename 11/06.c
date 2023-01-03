#include <stdio.h>
#include <stdlib.h>
int pert(int **M, int m, int n, int q)
{
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         if (M[i][j] == q)
         {
            return(1);
         }
      }
   }
   return(0);
}

int main()
{
   int m, n;

   scanf("%d\n%d", &m, &n);

   int **M;

   M = (int **)malloc(sizeof(int *) * m);
   for (int i = 0; i < m; i++)
   {
      M[i] = (int *)malloc(sizeof(int) * n);
      for (int j = 0; j < n; j++)
      {
         scanf("%d", &M[i][j]);
      }
   }
   int q;

   scanf("%d", &q);
   printf("%d\n", pert(M, m, n, q));
   for (int i = 0; i < m; i++)
   {
      free(M[i]);
   }
   free(M);
   return(0);
}
