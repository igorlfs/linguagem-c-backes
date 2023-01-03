#include <stdio.h>
#include <stdlib.h>
struct aluno
{
   int  n;
   char nome[64];
   int  p[3];
};
int main()
{
   printf("%lu\n", sizeof(struct aluno));
   return(0);
}
