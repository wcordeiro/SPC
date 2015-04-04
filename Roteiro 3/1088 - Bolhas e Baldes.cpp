#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int vet[100001];
    int mov = 0;
    int aux;
    while(n !=0 ){
        for (int i = 1; i <= n ; i++){
               cin >> vet[i];
        }
        for (int i = 1; i <= n ; i++){
               if(vet[i] != i){
                  mov += (2*((vet[i]) - (i))) -1;
                  aux = vet[vet[i]];
                  vet[vet[i]] = vet[i];
                  vet[i] = aux;
                  i--;
               }
        }
        if((mov % 2) == 0 ){
            cout << "Carlos";
        }
        else{
            cout << "Marcelo";
        }
        cout << endl;
        mov =0;
        cin >> n;
    }
    return 0;
}
