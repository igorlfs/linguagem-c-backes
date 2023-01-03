#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void maiuscula(char *str);
int main() 
{
   char str[64];
   fgets(str,63,stdin);
   str[(strlen(str)-1)]='\0';
   maiuscula(str);
   return 0;
}
void maiuscula(char *str)
{
   for (int i=0; str[i]!='\0'; i++)
   {
      if (str[i]>=97 && str[i]<=122)
      {
         str[i]-=32;
      }
   }
   fputs(str,stdout);
   putchar('\n');
}
