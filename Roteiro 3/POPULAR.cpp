#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;


int main()
{
    int n;
    int vet[200]={};
    cin >> n;
    int aux;
    int maior =0;
    while(n !=0 ){
        for(int i = 0; i < n ; i++){
           for(int j = 0; j < n ; j++){
               cin >> aux;
               vet[j] += aux;
           }
        }
        maior = 0;
        for(int i = 0; i < n ; i++){
           if(vet[i] > maior){
               maior = vet[i];
           }
           vet[i] = 0;
        }
        cout << maior << endl;
        cin >> n;
    }
    return 0;
}
