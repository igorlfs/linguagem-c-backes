#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int mfp(int p);
int main() 
{
   int n;
   scanf("%d",&n);
   printf("%d\n",mfp(n));
   return 0;
}
int mfp(int p)
{

   if (p==1 || p==2)
      return p;
   if (p>2) 
   {
      for (int i = 2;; i++)
      {
         if ((p % i) == 0)
         {
            return(mfp(p/i));
         }
         if (i > sqrt(p))
         {
            return(p);
         }
      }
   }
   return 0;
}
