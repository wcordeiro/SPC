#include <stdio.h>
#include <iostream>
#include <math.h>
 
using namespace std;
 
 long long factorial ( long long n){
    if ( n ==0 || n == 1){
        return 1;
    }
    else return n * factorial(n-1);
}
 
int main()
{
    long long n, n2;
    long long result;
    while( (cin >> n >> n2 )){
       result = factorial(n) + factorial ( n2);
       cout << result << endl;
    }
    return 0;
}
