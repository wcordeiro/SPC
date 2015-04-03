#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cctype>

using namespace std;


int main()
{
    int n;
    cin >> n;
    string prob;
    string sequencia;
    string invert;
    while ( n !=0){
        cin >> prob >> sequencia;
        sequencia+=sequencia;
        while(prob.size()>sequencia.size()){
            sequencia+=sequencia;
        }
        for(int i = (int)(prob.size()) - 1; i > -1 ; i--){
            if(i == (int)(prob.size()) -1 )
               invert = prob[i];
            else
               invert += prob[i];
        }
        if(sequencia.find(prob)!= -1){
            cout << "S" <<endl;
        }
        else if(sequencia.find(invert)!= -1){
            cout << "S" <<endl;
        }
        else{
            cout<< "N" <<endl;
        }
        invert.clear();
        n--;
    }
    return 0;
}



