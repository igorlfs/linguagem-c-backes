#include <stdio.h>
#include <stdlib.h>
char *mes(int n);
int dias(int n);

int main()
{
   int n;

   scanf("%d", &n);
   fputs(mes(n), stdout);
   printf("%d\n", dias(n));
   return(0);
}

int dias(int n)
{
   int d[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   if (n < 13)
   {
      return(d[n - 1]);
   }
   else
   {
      return(0);
   }
}

char *mes(int n)
{
   if (n == 1)
   {
      return("janeiro\n");
   }

   if (n == 2)
   {
      return("fevereiro\n");
   }

   if (n == 3)
   {
      return("março\n");
   }

   if (n == 4)
   {
      return("abril\n");
   }

   if (n == 5)
   {
      return("maio\n");
   }

   if (n == 6)
   {
      return("junho\n");
   }

   if (n == 7)
   {
      return("julho\n");
   }

   if (n == 8)
   {
      return("agosto\n");
   }

   if (n == 9)
   {
      return("setembro\n");
   }

   if (n == 10)
   {
      return("outubro\n");
   }

   if (n == 11)
   {
      return("novembro\n");
   }

   if (n == 12)
   {
      return("dezembro\n");
   }

   else
   {
      return("Não é mês\n");
   }
}
