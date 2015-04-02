#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int numero;
    int i;
    int sum =0;
    int j = 1;
    bool passou = false;
    int result = -5000;
    while( (cin >> n )){
       for (i = 0; i < n; i++){
           cin >> numero;
          if(numero == sum && passou == false){
             result = numero;
             passou = true;
          }
          sum += numero;
       }
       printf("Instancia %d\n",j);
       j++;
       if(result == -5000 ){
        printf("nao achei\n\n");
       }
       else{
         printf("%d\n\n",result);
       }
       sum = 0;
       result = -5000;
       passou = false;
    }
    return 0;
}




