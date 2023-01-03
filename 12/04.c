#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int  n = 0;
   char arq[128], pala[128];

   fgets(arq, 128, stdin);
   arq[strlen(arq) - 1] = '\0';

   FILE *p1 = fopen(arq, "r");

   if (p1 == NULL)
   {
      perror("");
      exit(1);
   }
   fgets(pala, 128, stdin);
   pala[strlen(pala) - 1] = '\0';

   while (1)
   {
      char ch;
      ch = fgetc(p1);
      if (ch == pala[0])
      {
         for (int j = 1; pala[j] != '\0'; j++)
         {
            ch = fgetc(p1);
            if (ch != pala[j])
            {
               break;
            }
            else if (j == strlen(pala) - 1)
            {
               n++;
            }
         }
      }
      if (feof(p1))
      {
         break;
      }
   }
   printf("%d\n", n);
   return(0);
}
