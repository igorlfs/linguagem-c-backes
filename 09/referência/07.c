#include <stdio.h>
#include <stdlib.h>
int soma_elementos(int A[][3],int n);
int main() 
{
   int A[3][3];
   for (int i=0; i<3; i++)
      for (int j=0; j<3; j++)
         scanf("%d",&A[i][j]);
   printf("%d\n",soma_elementos(A,3));
   return 0;
}
int soma_elementos(int A[][3],int n)
{
   int s=0;
   for (int i=0; i<3; i++)
      for (int j=0; j<3; j++)
         s+=A[i][j];
   return s;
}
