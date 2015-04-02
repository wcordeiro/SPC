#include <stdio.h>
#include <iostream>
#include <math.h>
 
using namespace std;
 
 
int main()
{
    int vet [50];
    vet[0] = 0;
    vet[1] = 1;
    int n;
    cin >> n;
    for (int i =2; i < n; i++){
        vet[i] = vet[i-1] + vet[i-2];
    }
    for (int i =0; i < n-1; i++){
        cout << vet[i]<< " ";
    }
    cout << vet[n-1]<<endl;
    return 0;
}
