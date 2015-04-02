#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
  int M;
  cin >> M;
  int result=7;
  while(M > 10 ){
    if (M >= 101){
        result += 5;
    }
    else if(M >= 31){
        result += 2;
    }
    else if (M >= 11){
        result += 1;
    }
    M--;
  }
  cout << result;
}


