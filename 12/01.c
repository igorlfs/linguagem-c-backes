#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char str[128];
   int  lin = 0;
   char c;

   fgets(str, 50, stdin);
   str[strlen(str) - 1] = '\0';
   FILE *fh = fopen(str, "r");

   if (fh == NULL)
   {
      perror("Erro: ");
      exit(1);
   }
   while ((c = fgetc(fh)) != EOF)
   {
      if (c == '\n')
      {
         lin++;
      }
   }
   fclose(fh);
   printf("%d\n", lin);
   return(0);
}
