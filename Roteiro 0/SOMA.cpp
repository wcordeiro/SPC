#include <stdio.h>
     
int main()
{
    int n;
    int aux;
    int result =0;
    scanf("%d",&n);
    while( n != 0){
    scanf("%d",&aux);
    result += aux;
    n--;
    }
    printf("%d",result);
    return 0;
} 
