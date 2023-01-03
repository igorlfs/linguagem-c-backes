#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char nam[64];
   char ch;

   fgets(nam, 63, stdin);
   nam[strlen(nam) - 1] = '\0';
   int   t = 0;
   FILE *p = fopen(nam, "r");

   while ((ch = fgetc(p)) != EOF)
   {
      if (ch == '\n' || ch == ' ')
      {
         ch = fgetc(p);
         if (ch != '\n' && ch != ' ')
         {
            t++;
         }
      }
   }
   fclose(p);
   printf("%d\n", t);
   return(0);
}
