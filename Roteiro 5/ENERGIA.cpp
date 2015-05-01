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

int mat[2000][2000];
int E,L,M,P;

bool compare (int i,int j) { return (i<j); }

bool BFS (int from){
    queue <int> fronteira;
    vector <int> visited;
    visited.clear();
    for(int i = 0; i <= E; i++ ){
       visited.push_back(0);
    }
    int cont = 1;
    fronteira.push(from);
    while(!fronteira.empty()){
        int aux = fronteira.front();
        fronteira.pop();
        for(int i = 1; i <= E; i++ ){
            if(mat[i][aux] == 1){
                if(visited[i] != 1){
                    fronteira.push(i);
                    visited[i] = 1;
                    cont++;
                }
            }
        }
        if(cont > E) break;
    }
    return (cont > E);
}

int main()
{
  int j = 1;
  cin >> E >> L;
  while(E != 0 || L != 0){
    memset(mat,0,sizeof(mat));
    int aux1,aux2;
    for(int i = 1; i <= L; i++){
        cin >> aux1 >> aux2;
        mat[aux1][aux2] = 1;
        mat[aux2][aux1] = 1;
    }
    bool teste = true;
    for(int i = 1; i <= E; i++){
        if(!BFS(i)){
            teste = false;
            break;
        }
    }
    cout << "Teste " << j << endl;
    j++;
    if(teste)
        cout << "normal" << endl;
    else
        cout << "falha" << endl;
    cout << endl;
    cin >> E >> L;
  }
  return 0;
}

