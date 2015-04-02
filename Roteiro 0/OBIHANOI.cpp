#include <stdio.h>
#include <math.h>

int main (){
   int n;
   scanf("%d",&n);
   int i = 1;
   int aux = 0;
   while ( n != 0){
    printf("Teste %d\n",i);
    aux = (pow(2,n));
    printf("%d\n\n", aux - 1);
    scanf("%d",&n);
    i++;
   }
   return 0;
}

