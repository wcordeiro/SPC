#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;


int main()
{
    int N,M;
    cin >> N >> M;
    int vet[N];
    bool teste = true;
    for (int i =0; i < N; i++){
        cin >> vet[i];
        if(i > 0){
            if((vet[i] - vet[i-1]) > M){
                teste = false;
            }
        }
    }
    if(42195 - vet[N-1] > M ){
        teste = false;
    }
    if(teste){
       cout << "S";
    }
    else{
        cout << "N";
    }
    return 0;
}
