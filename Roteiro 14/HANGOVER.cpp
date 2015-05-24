#include <iostream>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <stack>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(true);
  double n;
  cin >> n;
  int cont;
  double total;
  while(n != 0.00){
     cont = 1;
     total = 0.0;
     while(total <= n){
        cont = cont + 1 ;
        total += (double) 1 / cont;
     }
     cout << cont - 1 << " card(s)" << endl;
     cin >> n;
  }
  return 0;
}

