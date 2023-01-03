#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

   for (int i = 0; i < 5; i++)
   {
      printf("Insira os dados do %d-iésimo atleta:\nNome: ", i + 1);
      fgets(a[i].nome, 63, stdin);
      a[i].nome[strlen(a[i].nome) - 1] = '\0';
      printf("Esporte: ");
      fgets(a[i].esporte, 63, stdin);
      a[i].esporte[strlen(a[i].esporte) - 1] = '\0';
      printf("Idade: ");
      scanf("%d", &a[i].idade);
      printf("Altura: ");
      scanf("%f", &a[i].altura);
      fgetc(stdin);
   }

   FILE *fh = fopen("atletas", "wb");

   fwrite(a, sizeof(atleta), 5, fh);
   fclose(fh);
   return(0);
}
