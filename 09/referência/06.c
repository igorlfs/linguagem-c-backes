#include <stdio.h>
#include <stdlib.h>
void transposta(int A[][3],int n);
int main() 
{
   int A[3][3];
   for (int i=0; i<3; i++)
      for (int j=0; j<3; j++)
         scanf("%d",&A[i][j]);
   transposta(A,3);
   return 0;
}
void transposta(int A[][3],int n)
{
   int B[3][3];
   for (int i=0; i<3; i++)
      for (int j=0; j<3; j++)
         B[i][j]=A[j][i];
   for (int i=0; i<3; i++)
      for (int j=0; j<3; j++)
         A[i][j]=B[i][j];
}
