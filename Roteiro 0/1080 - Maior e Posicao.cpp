#include <stdio.h>
#include <math.h>
 
 
int main (){
  int aux;
  int max = 0;
  int pos=1;
  int i;
  for ( i =1; i < 11; i++ ){
    scanf("%d",&aux);
    if( aux > max){
        max = aux;
        pos = i;
    }
  }
  printf("%d\n%d\n",max,pos);
 
  return 0;
}
