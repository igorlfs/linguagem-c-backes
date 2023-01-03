#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char fnam[64];
   int *al;

   al = calloc(26, sizeof(int));

   fgets(fnam, 63, stdin);
   fnam[strlen(fnam) - 1] = '\0';
   FILE *p = fopen(fnam, "r");

   if (p == NULL)
   {
      perror("Erro: ");
      return(1);
   }
   char ch;

   while ((ch = fgetc(p)) != EOF)
   {
      for (int i = 0; i < 26; i++)
      {
         if (ch == 65 + i || ch == 97 + i)
         {
            al[i]++;
         }
      }
   }
   for (int i = 0; i < 26; i++)
   {
      printf("%d-letra: %d\n", i + 1, al[i]);
   }
   free(al);
   fclose(p);
   return(0);
}
