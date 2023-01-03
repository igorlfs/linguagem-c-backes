#include <stdio.h>
#include <stdlib.h>
int bin(int n);
int ten(int n);

int main()
{
   FILE *p = fopen("bin", "w");

   if (p == NULL)
   {
      perror("");
      exit(1);
   }
   while (1)
   {
      int n;
      scanf("%d", &n);
      if (n < 0)
      {
         break;
      }
      int b = bin(n);
      fprintf(p, "%d", b);
      fputc('\n', p);
   }
   fclose(p);
   return(0);
}

int bin(int n)
{
   int r, b = 0, i = 0;

   do
   {
      r  = n % 2;
      b += r * ten(i);
      i++;
      n = n / 2;
   } while (n != 0);
   return(b);
}

int ten(int n)
{
   if (n == 0)
   {
      return(1);
   }
   else
   {
      --n;
      return(10 * ten(n));
   }
}
