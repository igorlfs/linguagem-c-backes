#include <stdio.h>
#include <stdlib.h>
int main()
{
   int v[5]; // A escolha de 100 números é completamente arbitraŕia, então usarei só 5

   FILE *p = fopen("numbin", "rb");

   if (p == NULL)
   {
      perror(NULL);
      return(1);
   }
   fread(v, sizeof(int), 5, p);
   fclose(p);
   int s = 0;

   for (int i = 0; i < 5; i++)
   {
      s += v[i];
   }
   printf("%d\n", s);
   return(0);
}
