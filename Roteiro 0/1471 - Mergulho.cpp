#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool myfunction (int i,int j) { return (i<j); }
 
int main()
{
    long long int N,R;
    int  vet [100000] = {};
    long long int aux;
    while(cin >> N >> R){
            for (long long int i =1; i <= R ; i ++){
                cin >> aux;
                vet[aux] = 1;
            }
            if(N == R){
                cout << "*";
            }
            else {
            for (long long int i =1; i <= N ; i ++){
                if(vet[i] != 1 ){
                    cout << i << " ";
                }
            }
        }
        cout << endl;
        memset(vet, 0, sizeof(vet));
    }
    return 0;
}
