#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int palindromo(char *str);
int main() 
{
   char str[64];
   fgets(str,63,stdin);
   str[(strlen(str)-1)]='\0';
   printf("%d\n",palindromo(str));
   return 0;
}
int palindromo(char *str)
{
   char reversa[64];
   for (int i=0; i<=strlen(str); i++)
   {
      reversa[i]=str[(strlen(str)-i-1)];
      if (reversa[i]!=str[i])
      {
         return 0;
      }
   }
   return 1;
}
