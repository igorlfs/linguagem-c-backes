#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> // Biblioteca para trabalhar com tempo
int contador_idade(int da, int ma, int aa, int d, int m, int a);

int main(int argc, char *argv[])
{
   if (argv[1] == NULL || argv[2] == NULL)
   {
      printf("Insira o nome do input e o nome do output!\n");
      return(1);
   }

   // Data atual
   int    da, ma, aa;
   time_t data_bruta;                     // Declara um tipo "tempo"

   time(&data_bruta);                     // Associa ao tipo "tempo" a hora atual
   struct tm *info_data;                  // Declara uma estrutura para gerenciar o "tempo"

   info_data = localtime(&data_bruta);    //  Associa à estrutura o "tempo" ao horário local
   da        = info_data->tm_mday;        // Dia do mês
   ma        = info_data->tm_mon + 1;     // Mês do ano (começa em 0)
   aa        = info_data->tm_year + 1900; // Ano (começa em 1900)

   // Leitura do arquivo
   FILE *p  = fopen(argv[1], "r");
   FILE *p2 = fopen(argv[2], "w");

   while (1)
   {
      char nome[64];
      int  d, m, a;
      fgets(nome, 63, p);
      nome[strlen(nome) - 1] = '\0';
      fscanf(p, "%d %d %d", &d, &m, &a);
      fgetc(p);
      if (feof(p))
      {
         break;
      }
      int idade;
      idade = contador_idade(da, ma, aa, d, m, a);
      fprintf(p2, "%s %d\n", nome, idade);
   }
   fclose(p2);
   fclose(p);
   return(0);
}

int contador_idade(int da, int ma, int aa, int d, int m, int a)
{
   if (m > ma || (m == ma && d > da))
   {
      return(aa - a - 1);
   }
   else
   {
      return(aa - a);
   }
}
