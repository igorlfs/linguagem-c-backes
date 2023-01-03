#include <stdio.h>
#include <stdlib.h>

int ***matriz(char ma[]);

int main(int argc, char *argv[])
{
   if (argv[1] == NULL)
   {
      perror("");
      return(1);
   }
   matriz(argv[1]);
   return(0);
}

int ***matriz(char ma[])
{
   FILE *p = fopen(ma, "r");
   int   lin, col;

   fscanf(p, "%d %d", &lin, &col);
   int **M;

   M = (int **)malloc(lin * sizeof(int *));
   for (int i = 0; i < lin; i++)
   {
      M[i] = (int *)malloc(col * sizeof(int));
      for (int j = 0; j < col; j++)
      {
         fscanf(p, "%d", &M[i][j]);
         printf("%d ", M[i][j]);
      }
      putchar('\n');
   }
   fclose(p);
   int ***r = &M;

   for (int i = 0; i < lin; i++)
   {
      free(M[i]);
   }
   free(M);

   return(r);
}
