#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   int n;

   scanf("%d", &n);
   int *p;

   p = (int *)malloc(n * sizeof(int));
   FILE *fh = fopen(argv[1], "rb");

   fread(p, sizeof(int), n, fh);
   fclose(fh);
   int M, m;

   M = m = *(p);
   for (int i = 0; i < n; i++)
   {
      if (*(p + i) > M)
      {
         M = *(p + i);
      }
      else
      {
         m = *(p + i);
      }
   }
   free(p);
   printf("M: %d\nm: %d\n", M, m);
   return(0);
}
