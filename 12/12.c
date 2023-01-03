#include <stdio.h>
#include <stdlib.h>
void vetor(int *v, int n);

int main()
{
   int n;

   scanf("%d", &n);
   int *v = (int *)malloc(n * sizeof(int));

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &v[i]);
   }
   vetor(v, n);
   free(v);
   return(0);
}

void vetor(int *v, int n)
{
   FILE *p = fopen("vetor.txt", "w");

   for (int i = 0; i < n; i++)
   {
      fprintf(p, "%d", v[i]);
      fputc('\n', p);
   }
   fclose(p);
}
