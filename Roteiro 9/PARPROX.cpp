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
  int N;
  cin >> N;
  vector <pair <int,int> > pontos;
  int auxx,auxy;
  double menor = 0x3f3f3f3f,dist;
  for(int i = 0; i < N; i++){
    cin >> auxx >> auxy;
    pontos.push_back(pair < int, int> (auxx,auxy));
  }
  for(vector <pair <int,int> >::iterator it = pontos.begin(); it != pontos.end(); ++it){
     for(vector <pair <int,int> >::iterator got = it + 1; got != pontos.end(); ++got){
            dist = sqrt( pow ((*got).first - (*it).first, 2) + pow ((*got).second - (*it).second, 2));
            if(it == pontos.begin() && got == pontos.begin() ){
                menor = dist;
            }
            else if(dist < menor){
                menor = dist;
            }
     }
  }
  if(menor != 0x3f3f3f3f)
    printf("%.3f",menor);
  else
    printf ("0");
  return 0;
}

