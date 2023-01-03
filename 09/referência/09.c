#include <stdio.h>
#include <stdlib.h>
struct aluno
{
   int  n;
   char nome[64];
   int p[3];
};
typedef struct aluno aluno;
int melhor_aluno(aluno a[], int n);
int main() 
{
   int n;
   scanf("%d",&n);
   aluno a[n];
   for (int i=0; i<n; i++)
   {
      scanf("%d %s %d %d %d",&a[i].n, a[i].nome, &a[i].p[0], &a[i].p[1], &a[i].p[2]);
   }
   printf("%d\n",melhor_aluno(a,n));
   return 0;
}
int melhor_aluno(aluno a[], int n)
{
   float *m=calloc(sizeof(float),n);
   for (int i=0; i<n; i++)
   {
      for (int j=0; j<3; j++)
      {
         m[i]+=a->p[j];
      }
      m[i]=m[i]/3;
   }
   aluno best=a[0];
   int melhor_media=m[0];
   for (int i=0; i<n; i++)
   {
      if (m[i]>=melhor_media)
      {
         best=a[i];
         melhor_media=m[i];
      }
   }
   return (best.n); // O que é o índice?
}
