#include <stdio.h>
	 
	 
int main()
{
	int n;
	int beto=0,aldo=0;
	int auxb,auxa;
	int i;
	int j = 1;
	scanf("%d",&n);
	while(n != 0){
	    for(i = 0; i < n; i++){
	       scanf("%d %d",&auxa,&auxb);
           aldo += auxa;
	       beto += auxb;
	   }
	   printf("Teste %d\n",j);
	   j++;
	   if(aldo > beto){
	      printf("Aldo\n\n");
      }
	  else
	      printf("Beto\n\n");
	  scanf("%d",&n);
	  aldo = 0;
	  beto = 0;
   }
   return 0;
}
