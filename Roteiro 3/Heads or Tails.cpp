#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;


int main()
{
    int x,y,a,b;
    int cont =0;
    int maior=1;
    cin >> x >> y >> a >> b;
    if(x > y){
        maior = x;
    }
    else {
        maior = y;
    }
    int v[200]={};
    int p[200]={};
    vector <pair<int,int> > result;
    for (int i = 0; i < maior; i ++){
           if((a+i) <= x ){
              v[i] = a + i;
           }
    }
    int aux = 0;
    for(int i = 0; i < maior; i++){
      for(int j = aux; j < 200; j++){
        if((b+j) <= y && (b+j) < v[i]){
           p[j] = b+j;
                 aux = j;
        }
      }
    }
    for(int i = 0; i < 200; i++){
       for(int j = 0; j < 200; j++){
          if(v[i] != 0 && p[j] !=0 && p[j] < v[i]){
            result.push_back(pair <int,int> (v[i],p[j]));
            cont ++;
          }
        }
    }
    cout << cont << endl;
    if(cont > 0){
       for(vector<pair <int,int> >::iterator it = result.begin(); it != result.end(); it++){
               cout << (*it).first << " " << (*it).second << endl;
       }
    }
    return 0;
}
