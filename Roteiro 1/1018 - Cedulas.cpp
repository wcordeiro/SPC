#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
 
using namespace std;
 
 
int main()
{
    int n;
    cin >> n;
    int C;
    C = n / 100;
    int Cq;
    Cq = (n - (C*100))/ 50;
    int V;
    V = (n - ((C*100) + (Cq*50)))/20;
    int D;
    D = (n - ((C*100) + (Cq*50)+ ( V *20)))/10;
    int Cc;
    Cc = (n - ((C*100) + (Cq*50)+ ( V *20) + (D * 10)))/5;
    int Ds;
    Ds = (n - ((C*100) + (Cq*50)+ ( V *20) + (D * 10)+ (Cc*5)))/2;
    int U;
    U = (n - ((C*100) + (Cq*50)+ ( V *20) + (D * 10)+ (Cc*5) + (Ds*2)));
    cout << n <<endl;
    cout <<C <<" nota(s) de R$ 100,00"<<endl;
    cout <<Cq <<" nota(s) de R$ 50,00"<<endl;
    cout <<V <<" nota(s) de R$ 20,00"<<endl;
    cout <<D <<" nota(s) de R$ 10,00"<<endl;
    cout <<Cc <<" nota(s) de R$ 5,00"<<endl;
    cout <<Ds<<" nota(s) de R$ 2,00"<<endl;
    cout <<U <<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
