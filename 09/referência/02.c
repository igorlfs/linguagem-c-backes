#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void esfera(float r);
int main() 
{
   float r;
   scanf("%f",&r);
   esfera(r);
   return 0;
}
void esfera(float r)
{
   float v, a;
   v=(4.0/3)*M_PI*r*r*r;
   a=4*M_PI*r*r;
   printf("V=%f\nA=%f\n",v,a);
}
