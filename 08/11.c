#include <stdio.h>
#include <stdlib.h>

struct dv
{
   int dia;
   int mes;
   int ano;
};

int main()
{
   struct dv data[2];

aga0:
   printf("Dê a entrada 0: ");
   scanf("%d/%d/%d", &data[0].dia, &data[0].mes, &data[0].ano);

   if (data[0].ano < 0)
   {
      printf("Data inválida!\n");
      goto aga0;
   }
   if (data[0].mes > 12 || data[0].mes < 1)
   {
      printf("Data inválida!\n");
      goto aga0;
   }
   int dias0[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   if ((data[0].ano % 4 == 0 && data[0].ano % 100 != 0) || data[0].ano % 400 == 0)
   {
      dias0[2] = 29;
      int j = data[0].mes;
      if (data[0].dia > dias0[j] || data[0].dia < 1)
      {
         printf("Data inválida!\n");
         goto aga0;
      }
   }
   else
   {
      int j = data[0].mes;
      if (data[0].dia > dias0[j] || data[0].dia < 1)
      {
         printf("Data inválida!\n");
         goto aga0;
      }
   }
aga1:
   printf("Dê a entrada 1: ");
   scanf("%d/%d/%d", &data[1].dia, &data[1].mes, &data[1].ano);

   if (data[1].ano < 0)
   {
      printf("Data inválida!\n");
      goto aga1;
   }
   if (data[1].mes > 12 || data[1].mes < 1)
   {
      printf("Data inválida!\n");
      goto aga1;
   }
   int dias1[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   if ((data[1].ano % 4 == 0 && data[1].ano % 100 != 0) || data[1].ano % 400 == 0)
   {
      dias1[2] = 29;
      int j = data[1].mes;
      if (data[1].dia > dias1[j] || data[1].dia < 1)
      {
         printf("Data inválida!\n");
         goto aga1;
      }
   }
   else
   {
      int j = data[1].mes;
      if (data[1].dia > dias1[j] || data[1].dia < 1)
      {
         printf("Data inválida!\n");
         goto aga1;
      }
   }
   int i;
   int soma = 0;

   if (data[0].ano > data[1].ano)
   {
      for (i = data[1].ano + 1; i < data[0].ano; i++)
      {
         soma += (i % 4 == 0) ? 366 : 365;
      }
      soma += data[0].dia;
      soma += dias1[data[1].mes] - data[1].dia;
      for (i = 0; i < data[0].mes; i++)
      {
         soma += dias0[i];
      }
      for (i = data[1].mes + 1; i < 13; i++)
      {
         soma += dias1[i];
      }
   }
   else if (data[0].ano == data[1].ano)
   {
      if (data[0].mes >= data[1].mes)
      {
         for (i = data[1].mes + 1; i < data[0].mes; i++)
         {
            soma += dias1[i];
         }
         if (data[1].mes < data[0].mes)
         {
            soma += data[0].dia + dias1[data[1].mes] - data[1].dia;
         }
         else
         {
            soma += data[0].dia - data[1].dia;
         }
      }
      else if (data[0].mes < data[1].mes)
      {
         for (i = data[0].mes + 1; i < data[1].mes; i++)
         {
            soma += dias0[i];
         }
         if (data[0].mes < data[1].mes)
         {
            soma += data[1].dia + dias0[data[0].mes] - data[0].dia;
         }
         else
         {
            soma += data[1].dia - data[0].dia;
         }
      }
   }
   else if (data[0].ano < data[1].ano)
   {
      for (i = data[0].ano + 1; i < data[1].ano; i++)
      {
         soma += (i % 4 == 0) ? 366 : 365;
      }
      soma += data[1].dia;
      soma += dias0[data[0].mes] - data[0].dia;
      for (i = 0; i < data[1].mes; i++)
      {
         soma += dias1[i];
      }
      for (i = data[0].mes + 1; i < 13; i++)
      {
         soma += dias0[i];
      }
   }
   printf("%d\n", soma);
   return(0);
}
