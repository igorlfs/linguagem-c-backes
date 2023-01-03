#include <stdio.h>
#include <stdlib.h>
struct cadastro
{
   char nome[64];
   int  idade;
   char endereco[64];
};
void func(unsigned int n)
{
   struct cadastro *p;

   p = (struct cadastro *)malloc(n * sizeof(struct cadastro));

   for (int i = 0; i < n; i++)
   {
      fgets(p[i].nome, 64, stdin);
      scanf("%d", &p[i].idade);
      getchar();
      fgets(p[i].endereco, 64, stdin);
   }
   for (int i = 0; i < n; i++)
   {
      fputs(p[i].nome, stdout);
      printf("%d\n", p[i].idade);
      fputs(p[i].endereco, stdout);
   }
   free(p);
}

int main()
{
   int n;

   scanf("%d", &n);
   getchar();
   func(n);
   return(0);
}
