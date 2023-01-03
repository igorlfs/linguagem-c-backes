#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char str[64], out[64];

   setbuf(stdin, NULL);
   fgets(str, 64, stdin);
   str[strlen(str) - 1] = '\0';
   for (int i = (strlen(str) - 1); i >= 0; i--)
   {
      out[i] = str[i];
   }
   for (int j = (strlen(str) - 1); j >= 0; j--)
   {
      str[j] = out[j];
      printf("%c", str[j]);
   }
   putchar('\n');
   return(0);
}
