#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int despertador(int h1, int min1, int h2, int min2){
    int i = min1+(h1*60), f = min2+(h2*60);
    int mini = f > i? f - i : (f + 24*60) - i;
    return mini;
}


int main()
{
    int h1,m1,h2,m2;
    cin >> h1 >> m1 >>h2 >>m2;
    while(h1 !=0 || m1 != 0 || h2 !=0 || m2 != 0){

        cout << despertador(h1,m1,h2,m2) << endl;
        cin >> h1 >> m1 >>h2 >>m2;
    }
    return 0;
}
