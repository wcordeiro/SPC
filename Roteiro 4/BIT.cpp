#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int Cq,D,C,U;
    int j=1;
    while (n !=0){
        Cq = n/50;
        D = (n - ((Cq*50)))/10;
        C = (n - ( (Cq*50)+ (D * 10)))/5;
        U = (n - ((Cq*50)+ (D * 10)+ (C*5)));
        cout << "Teste " << j << endl;
        cout << Cq << " " << D << " " << C << " " << U << endl << endl;
        cin >> n;
        j++;
    }
    return 0;
}
