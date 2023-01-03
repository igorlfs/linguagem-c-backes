#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void comp(char *str1, char *str2)
{
   int   var = 0;
   char *p1 = str1, *p2 = str2;

   for (int i = 0; *(p1 + i) != '\0'; i++)
   {
      if (*(p1 + i) == *(p2))
      {
         for (int j = 0; *(p2 + j) != '\0'; j++)
         {
            if (*((p1 + i) + j) != *(p2 + j))
            {
               break;
            }
            if (j == (strlen(str2) - 2))
            {
               var = 1;
            }
         }
      }
   }
   if (var == 1)
   {
      printf("É substring\n");
   }
   else
   {
      printf("Não é substring\n");
   }
}

int main()
{
   char str[64], sub[64];

   fgets(str, 64, stdin);
   fgets(sub, 64, stdin);
   comp(str, sub);
   return(0);
}
