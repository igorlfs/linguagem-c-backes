#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double dpr(double v[], int n);
int main()
{
   int n;
   printf("De quantos valores você deseja calcular o DPR? ");
   scanf("%d", &n);
   double v[n];
   for (int i = 0; i < n; i++)
   {
      printf("Dê o valor da entrada %d: ", i + 1);
      scanf("%lf", &v[i]);
   }
   printf("O DPR é: %lf\n", dpr(v,n));
   return(0);
}
double dpr(double v[], int n)
{
   double s = 0;

   for (int i = 0; i < n; i++)
   {
      s += v[i];
   }

   double media = s/n;

   double desvio[n];
   double sigma = 0;

   for (int i = 0; i < n; i++)
   {
      desvio[i] = ((v[i] - media) * (v[i] - media));
      sigma += desvio[i];
   }

   double d = sqrt((sigma / (n - 1)));
   return d;
}
