#include <stdio.h>
#include <stdlib.h>
int converte(int h, int m, int s)
{
   int ss;
   ss=3600*h+60*m+s;
   return ss;
}
