#include <stdio.h>
#include <stdlib.h>
int main() 
{
   int a, *b, **c, ***d;
   b=&a;
   c=&b;
   d=&c;
   scanf("%d",&a);
   printf("%d\n",2 * *b);
   printf("%d\n",3 * **c);
   printf("%d\n",4 * ***d);
   return 0;
}
