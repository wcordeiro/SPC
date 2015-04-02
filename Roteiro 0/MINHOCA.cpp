#include <stdio.h>

int main (){
   int linhas,colunas;
   scanf("%d %d",&linhas,&colunas);
   int i,j;
   int campo[100][100];
   int sum = 0;
   int top = 0;
   for(i =0; i < linhas; i++){
    for(j =0; j < colunas; j++){
        scanf("%d", &campo[i][j]);
        sum += campo[i][j];
    }
    if(sum > top) top = sum;
    sum = 0;
   }

   for(i =0; i < colunas; i++){
    for(j =0; j < linhas; j++){
        sum += campo[j][i];
    }
    if(sum > top) top = sum;
    sum = 0;
   }

   printf("%d",top);
   return 0;
}

