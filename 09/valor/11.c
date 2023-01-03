#include <stdio.h>
#include <stdlib.h>
int pot(int x,int y );
int main() 
{
   int x,y;
   scanf("%d %d",&x,&y);
   printf("%d\n",pot(x,y));
   return 0;
}
int pot(int x,int y )
{
   if (y==0)
      return 1;
   else
   {
      y-=1;
      return (x*pot(x,y));
   }
}
