#include <stdio.h>
#include <stdlib.h>
int conta_vogais(char nome[]);

int main(int argc, char *argv[])
{
   if (argv[1] == NULL)
   {
      printf("Digite o nome do arquivo!\n");
      return(1);
   }
   // Não conta vogais com acento, etc
   printf("%d\n", conta_vogais(argv[1]));
   return(0);
}

int conta_vogais(char nome[])
{
   FILE *p = fopen(nome, "r");
   int   v = 0;

   while (1)
   {
      if (feof(p))
      {
         return(v);
      }
      char ch = fgetc(p);
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
         v++;
      }
   }
}
