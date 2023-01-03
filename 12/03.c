#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char conv[128], salv[128];

   fgets(conv, 128, stdin);
   conv[strlen(conv) - 1] = '\0';
   FILE *p1 = fopen(conv, "r");

   if (p1 == NULL)
   {
      perror("");
      exit(1);
   }

   fgets(salv, 128, stdin);
   salv[strlen(salv) - 1] = '\0';
   FILE *p2 = fopen(salv, "w");

   if (p2 == NULL)
   {
      perror("");
      exit(1);
   }
   while (1)
   {
      char ch;
      ch = fgetc(p1);
      if (ch >= 97 && ch <= 122)
      {
         ch = ch - 32;
      }
      if (ch != EOF)
      {
         fputc(ch, p2);
      }
      if (feof(p1))
      {
         break;
      }
   }
   fclose(p1);
   fclose(p2);
   return(0);
}
