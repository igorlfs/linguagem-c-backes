#include <stdio.h>
#include <stdlib.h>

float med(float p1, float p2, float p3, char ch);
int main() 
{
   float p1,p2,p3;
   char ch;
   scanf("%f %f %f %c", &p1, &p2, &p3, &ch);
   printf("%.2f\n",med(p1,p2,p3,ch));
   return 0;
}
float med(float p1, float p2, float p3, char ch)
{
   if (ch == 'a' || ch == 'A')
      return (p1+p2+p3)/3;
   if (ch == 'p' || ch == 'P')
      return (p1*5+p2*3+p3*2)/10;
   else
    return 0;
}
