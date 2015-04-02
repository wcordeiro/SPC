#include <iostream>
#include <stdio.h> 
#include <string> 

 using namespace std; 
bool isPrime(int num){ 
    if(num ==1) return true; 
    for(int i=2; i< num;i++){ 
        if(num%i==0){ 
           return false; 
       } 
   } 
   return true; 
} 
int main(){ 
   string palavra; 
   int sum; 
   while( (cin >> palavra )){ 
       sum=0; 
       for(int i=0; i<palavra.length() ;i++){ 
          sum += isupper(palavra[i]) ? ((palavra[i]) - 38): ((palavra[i])- 96) ; 
	  }
      cout << ((isPrime(sum))? "It is a prime word.\n": "It is not a prime word.\n"); 
   } 
   return 0; 
}


