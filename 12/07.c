#include <stdio.h>
#include <stdlib.h>
int main()
{
   printf("Entre com os nomes e telefones para cadastro: \n");

   FILE *p = fopen("contatinhos", "w");

   while (1)
   {
      char nome[64];
      int  telefone;
      printf("Nome: ");
      scanf("%s", nome);
      printf("Telefone: ");
      scanf("%d", &telefone);
      if (telefone == 0)
      {
         break;
      }
      fprintf(p, "%s %d\n", nome, telefone);
   }
   fclose(p);
   return(0);
}
