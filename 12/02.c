#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char arq1[100], arq2[100];

   fgets(arq1, 100, stdin);
   arq1[strlen(arq1) - 1] = '\0';
   FILE *p1 = fopen(arq1, "r");

   if (p1 == NULL)
   {
      perror("");
      exit(1);
   }
   FILE *fh = fopen("cat", "w");

   while (1)
   {
      int ch;
      ch = fgetc(p1);
      fputc(ch, fh);
      if (feof(p1))
      {
         break;
      }
   }
   fclose(p1);
   fclose(fh);
   fgets(arq2, 100, stdin);
   arq2[strlen(arq2) - 1] = '\0';
   FILE *p2 = fopen(arq2, "r");

   if (p2 == NULL)
   {
      perror("");
      exit(1);
   }
   FILE *fh2 = fopen("cat", "a");

   while (1)
   {
      int ch;
      ch = fgetc(p2);
      fputc(ch, fh2);
      if (feof(p2))
      {
         break;
      }
   }
   fclose(p2);
   fclose(fh2);
   return(0);
}
