#include <stdio.h>
#include <stdlib.h>
float converte (int f);
int main() 
{
   int f;
   scanf("%d",&f);
   converte(f);
   return 0;
}
float converte (int f)
{
   int c;
   c=(f-32)*(5/9);
   return c;
}
