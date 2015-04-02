#include <stdio.h>


int main()
{
  int n,n1,n2;
  char nome1[12];
  char nome2[12];
  int i,j=1;
  scanf("%d",&n);
  while(n != 0){
    scanf("%s",nome1);
    scanf("%s",nome2);
    printf("Teste %d\n",j);
    j++;
    for ( i = 0; i < n; i ++ ){
        scanf("%d %d",&n1,&n2);
        if ((n1+n2)% 2 == 0){
            printf("%s\n",nome1);
        }
        else printf("%s\n",nome2);
    }
    printf("\n");
    scanf("%d",&n);
  }
  return 0;
}


