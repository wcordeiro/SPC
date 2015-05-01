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
int N,M,L,P;

bool compare (int i,int j) { return (i<j); }

bool BFS (int from){
    queue <int> fronteira;
    vector <int> visited;
    visited.clear();
    for(int i = 0; i <= N; i++ ){
       visited.push_back(0);
    }
    int cont = 1;
    fronteira.push(from);
    while(!fronteira.empty()){
        int aux = fronteira.front();
        fronteira.pop();
        for(int i = 1; i <= N; i++ ){
            if(mat[i][aux] == 1){
                if(visited[i] != 1){
                    fronteira.push(i);
                    visited[i] = 1;
                    cont++;
                }
            }
        }
        if(cont > N) break;
    }
    return (cont > N);
}

int main()
{
  cin >> N;
  while(N != 0){
    cin >> M;
    memset(mat,0,sizeof(mat));
    int aux1,aux2,aux3;
    for(int i = 1; i <= M; i++){
        cin >> aux1 >> aux2 >> aux3;
        if(aux3 == 2){
            mat[aux1][aux2] = 1;
            mat[aux2][aux1] = 1;
        }
        else
            mat[aux1][aux2] = 1;
    }
    bool teste = true;
    for(int i = 1; i <= N; i++){
        if(!BFS(i)){
            teste = false;
            break;
        }
    }
    if(teste)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    cin >> N;
  }
  return 0;
}

