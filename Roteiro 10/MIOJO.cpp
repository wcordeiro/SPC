#include <stdio.h>

int main(void){

	int a, b,t;
	int at, bt;

	scanf("%d %d %d", &t, &a, &b);

	at = a;
	bt = b;

	for(;;){
		if (at>bt){
			if (at-bt==t){
				printf("%d",at);
				break;
			}
			else{
				bt+=b;
			}
		}
  		else{
			if (bt-at==t){
				printf("%d",bt);
				break;
			}
			else{
				at+= a;
			}
		}
	}

      return 0;
}
