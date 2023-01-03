#include <stdio.h>
#include <stdlib.h>
float serie(int n);

int main()
{
   int n;

   scanf("%d", &n);
   printf("%f\n", serie(n));
   return(0);
}

float serie(int n)
{
   float s = 0;

   for (float i = 1; i <= n; i++)
   {
      s += ((i * i) + 1) / (i + 3);
   }
   return(s);
}
