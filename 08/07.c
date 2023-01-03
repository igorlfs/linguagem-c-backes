#include <stdio.h>
#include <stdlib.h>

struct hora
{
   unsigned int horas;
   unsigned int minutos;
   unsigned int segundos;
} h[7];

int main()
{
   int i;

   for (i = 0; i < 5; i++)
   {
      do
      {
         scanf("%d:%d:%d", &h[i].horas, &h[i].minutos, &h[i].segundos);
      } while (h[i].horas < 0 || h[i].minutos < 0 || h[i].minutos > 60 || h[i].segundos < 0 || h[i].segundos > 60);
   }
   h[6] = h[0];
   for (i = 0; i < 5; i++)
   {
      if (h[i].horas > h[6].horas)
      {
         h[6] = h[i];
      }
      else if (h[i].horas == h[6].horas)
      {
         if (h[i].minutos > h[6].segundos)
         {
            h[6] = h[i];
         }
         else if (h[i].minutos == h[6].minutos)
         {
            if (h[i].segundos > h[6].segundos)
            {
               h[6] = h[i];
            }
         }
      }
   }
   printf("Maior hora: %.2d:%.2d:%.2d\n", h[6].horas, h[6].minutos, h[6].segundos);
   return(0);
}
