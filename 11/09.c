#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inverte(char *str)
{
   for (int i = (strlen(str) - 1); i >= 0; i--)
   {
      printf("%c", *(str + i));
   }
   putchar('\n');
}

int main()
{
   char str[64];

   setbuf(stdin, NULL);
   fgets(str, 64, stdin);
   str[strlen(str) - 1] = '\0';
   inverte(str);
   return(0);
}
