#include <stdio.h>
#include <stdlib.h>
void matriz(int *M[], int n, int m);

int main()
{
   int lin, col;

   scanf("%d %d", &lin, &col);
   int **M;

   M = (int **)malloc(lin * sizeof(int *));
   for (int i = 0; i < lin; i++)
   {
      M[i] = (int *)malloc(col * sizeof(int));
      for (int j = 0; j < col; j++)
      {
         scanf("%d", &M[i][j]);
      }
   }
   matriz(M, lin, col);
   for (int i = 0; i < lin; i++)
   {
      free(M[i]);
   }
   free(M);
   return(0);
}

void matriz(int **M, int n, int m)
{
   FILE *p = fopen("matriz.txt", "w");

   if (p == NULL)
   {
      perror("");
   }
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         fprintf(p, "%d ", M[i][j]);
      }
      fputc('\n', p);
   }
   fclose(p);
}
