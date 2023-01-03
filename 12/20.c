#include <stdio.h>
#include <stdlib.h>
struct atleta
{
   char  nome[64];
   char  esporte[64];
   int   idade;
   float altura;
};
typedef struct atleta atleta;
int main()
{
   atleta a[5];
   FILE *fh = fopen("atletas", "rb");

   fread(a, sizeof(atleta), 5, fh);
   fclose(fh);
   atleta alto, velho;
   alto=velho=a[0];
   for (int i=1; i<5; i++)
   {
      if (a[i].altura > alto.altura)
         alto=a[i];
      if (a[i].idade > velho.idade)
         velho=a[i];
   }
   printf("Alto: %s\nVelho: %s\n",alto.nome,velho.nome);
   return(0);
}
