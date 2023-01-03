#include <stdio.h>
#include <stdlib.h>
int maior(int x, int y);

int main()
{
   int x, y;

   scanf("%d", &x);
   scanf("%d", &y);
   printf("O maior número é %d\n", maior(x, y));
   return(0);
}

int maior(int x, int y)
{
   if (x > y)
   {
      return(x);
   }
   else
   {
      return(y);
   }
}
