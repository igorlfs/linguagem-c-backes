#include <stdio.h>
#include <stdlib.h>
void print(int *vet)
{
   int *p;

   p = vet;
   for (int i = 0; i < 10; i++)
   {
      printf("%d ", *(p + i));
   }
}

int main()
{
   int v[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

   print(v);
   putchar('\n');
   return(0);
}
