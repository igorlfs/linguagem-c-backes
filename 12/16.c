#include <stdio.h>
#include <stdlib.h>
int main()
{
   int v[5]; // A escolha de 100 números é completamente arbitraŕia, então usarei só 5

   for (int i = 0; i < 5; i++)
   {
      scanf("%d", &v[i]);
   }
   FILE *p = fopen("numbin", "wb");

   if (p == NULL)
   {
      perror(NULL);
      return(1);
   }
   fwrite(v, sizeof(int), 5, p);
   fclose(p);
   return(0);
}
