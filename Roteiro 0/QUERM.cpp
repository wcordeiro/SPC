#include <stdio.h>

int main (){
   int n;
   scanf("%d",&n);
   int i;
   int j = 1;
   int num = 0;
   int win = 0;
   int aux;
   while ( n != 0){
    for (i = 0; i < n; i++){
        scanf("%d",&aux);
        if ( aux == i+1){
            win = aux;
        }
    }
    printf("Teste %d\n",j);
    printf("%d\n\n", win);
    scanf("%d",&n);
    j++;
   }
   return 0;
}

