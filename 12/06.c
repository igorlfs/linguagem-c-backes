#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   float total = 0;
   FILE *p     = fopen(argv[1], "r");

   if (p == NULL)
   {
      perror("");
      return(1);
   }

   int *  quantidade = (int *)malloc(1 * sizeof(int));
   float *preco      = (float *)malloc(1 * sizeof(float));
   int    i          = 1;

   while (1)
   {
      if (feof(p))
      {
         break;
      }
      char lixo[128]; // O nome do produto não é importante

      fscanf(p, "%s %d %f", lixo, &quantidade[i], &preco[i]);
      total += quantidade[i] * preco[i];
      i++;
      quantidade = realloc(quantidade, i * sizeof(int));
      preco      = realloc(preco, i * sizeof(float));
   }
   printf("Total da compra: %.2f\n", total);
   fclose(p);
   free(quantidade);
   free(preco);
   return(0);
}
