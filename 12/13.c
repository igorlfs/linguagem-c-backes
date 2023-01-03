#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
   int  n;
   char nome[64];
   int  p1;
   int  p2;
   int  p3;
};
typedef struct aluno aluno;
int main(int argc, char *argv[])
{
   FILE *p = fopen(argv[1], "r");

   if (p == NULL)
   {
      perror("Erro: ");
      return(1);
   }
   int i = 0;

   while (1)
   {
      aluno a;
      fscanf(p, "%d %s %d %d %d", &a.n, a.nome, &a.p1, &a.p2, &a.p3);
      if (feof(p))
      {
         break;
      }
      printf("%d %s %d %d %d\n", a.n, a.nome, a.p1, a.p2, a.p3);
      i++;
   }
   fclose(p);
   return(0);
}
