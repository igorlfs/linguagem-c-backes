#include <stdio.h>
#include <stdlib.h>
int main()
{
   float  mat[3][3];
   float *p = &mat[0][0];

   for (int i = 0; i < 9; i++)
   {
      printf("%p ", (p + i));
   }
   putchar('\n');
   return(0);
}
