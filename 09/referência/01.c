#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void partes (float x);
int main() 
{
   float x;
   scanf("%f",&x);
   partes(x);
   return 0;
}
void partes (float x)
{
   printf("Parte inteira: %0.0f\n",floor(x));
   printf("Parte fracionária: %f\n",x-floor(x));
}
