#include <stdio.h>
#include <math.h>


int main (){
 int top;
 int n1,n2;
 char op;
 scanf("%d",&top);
 scanf("%d %c %d",&n1,&op,&n2);
 if(op == '+'){
    if((n1 + n2) > top){
        printf("OVERFLOW");
    }
    else{
        printf("OK");
    }
 }
 else if(op == '*'){
    if((n1 * n2) > top){
        printf("OVERFLOW");
    }
    else{
        printf("OK");
    }
 }
 return 0;
}

