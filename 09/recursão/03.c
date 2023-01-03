#include <stdio.h>
#include <stdlib.h>
int r=0; // A magia das variáveis globais
void crescente(int n);
int main() 
{
   int n;
   scanf("%d",&n);
   crescente(n);
   putchar('\n');
   return 0;
}
void crescente(int n)
{
   if (r <= n) 
   { 
      printf("%d ", r); 
      r++; 
      crescente(n); 
   } 
   else
      return; 
}
