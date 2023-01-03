#include <stdio.h>
#include <stdlib.h>
void retorna(int n)
{
   int *p = (malloc(n * sizeof(int)));

   if (n > 0)
   {
      printf("%p\n", p);
      free(p);
   }
   else
   {
      int *m = NULL;
      printf("%p\n", m);
   }
}

int main()
{
   int n;

   scanf("%u", &n);
   retorna(n);
   return(0);
}
