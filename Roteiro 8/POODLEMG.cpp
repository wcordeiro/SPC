#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
    int N,P;
    cin >> N >> P;
    int aux;
    while(N !=0 || P!=0){
        aux = 0;
        aux = N/P;
        if(N%P !=0)
            aux+=1;
        if(aux > 20)
            aux = 20;
        if(aux < 6)
            aux = 6;
        for(int i = 0; i < aux; i++){
            if(i == 0){
                cout << "P";
            }
            else if (aux  - i == 3)
                cout << "d";
            else if (aux  - i == 2)
                cout << "l";
            else if (aux  - i == 1)
                cout << "e";
            else
                cout << "o";
        }
        cin >> N >> P;
    }
    return 0;
}
