#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int N;
   printf("entrer un nombre : ");
   scanf("%d",&N);
   if (N%2 == 0){
    printf("le nombre est paire ");
   }
   else
    printf("le nombre est impaire");
    return 0;
}
