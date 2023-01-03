#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int segundo_grau(float a, float b, float c);

int main()
{
   float a, b, c;

   printf("Insira os coeficientes da equação: ");
   scanf("%f %f %f", &a, &b, &c);
   printf("%d\n", segundo_grau(a, b, c));
   return(0);
}

int segundo_grau(float a, float b, float c)
{
   if (a == 0)
   {
      printf("Não é equação de segundo grau.\n");
      return(-1);
   }
   else
   {
      float delta;
      delta = b * b - 4 * a * c;
      if (delta < 0)
      {
         return(0);
      }
      float x1, x2;
      x1 = (-b + sqrt(delta)) / 2 * a;
      x2 = (-b - sqrt(delta)) / 2 * a;
      if (delta == 0)
      {
         printf("%f\n", x1);
         return(1);
      }
      else
      {
         printf("%f %f\n", x1, x2);
         return(2);
      }
   }
}
