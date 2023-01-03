#include <stdio.h>
#include <stdlib.h>
float calc(float x, float y, char ch);
int main() 
{
   float x, y;
   char ch;
   scanf("%f %f %c", &x, &y, &ch);
   printf("%.2f\n",calc(x,y,ch));
   return 0;
}
float calc(float x, float y, char ch)
{
   switch (ch)
   {
      case '+' : return (x+y);
      case '-' : return (x-y);
      case '*' : return (x*y);
      case '/' : return (x/y);
   }
   return 0;
}
