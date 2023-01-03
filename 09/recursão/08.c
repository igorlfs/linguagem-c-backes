#include <stdio.h>
#include <stdlib.h>
int produto (int x, int y);
int main() 
{
   int x,y;
   scanf("%d %d", &x, &y);
   printf("%d\n",produto(x, y));
   return 0;
}
int produto (int x, int y)
{
   if (y==0)
      return 0;
   else
    return(x+produto(x,y-1));
}
