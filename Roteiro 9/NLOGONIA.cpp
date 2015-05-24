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
  int K;
  int divisax,divisay,auxx,auxy;
  vector <pair <int,int> > pos;
  cin >> K;
  while(K != 0){
    cin >> divisax >> divisay;
    while(K != 0){
        cin >> auxx >> auxy;
        pos.push_back(pair <int,int> (auxx,auxy));
        K--;
    }
    for(vector <pair <int,int> >::iterator it = pos.begin(); it!= pos.end(); ++it ){
        if ((*it).first == divisax && (*it).second == divisay){
            printf("divisa\n");
        }
        else if((*it).first != divisax && (*it).second == divisay){
            printf("divisa\n");
        }
        else if((*it).first == divisax && (*it).second != divisay){
            printf("divisa\n");
        }
        else{
            if((*it).first > divisax){
                if((*it).second > divisay){
                    printf("NE\n");
                }
                else printf("SE\n");
            }
            else{
                if((*it).second > divisay){
                    printf("NO\n");
                }
                else printf("SO\n");
            }
        }
    }
    pos.clear();
    cin >> K;
  }

  return 0;
}

