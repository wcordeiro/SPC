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
  int X1,Y1,X2,Y2;
  int N;
  int auxx,auxy,cont = 0;
  int j = 1;
  cin >> X1 >> Y1 >> X2 >> Y2;
  while(X1 != 0 || Y1 != 0 || X2 != 0 || Y2 != 0){
        cin >> N;
        for(int i =0; i < N; i++){
            cin >> auxx >> auxy;
            if(auxx <= X2 && auxx >= X1 && auxy <= Y1 && auxy >= Y2){
                cont++;
            }
        }
        cout << "Teste " << j << endl;
        j++;
        cout << cont << endl << endl;
        cont = 0;
        cin >> X1 >> Y1 >> X2 >> Y2;
  }
  return 0;
}

