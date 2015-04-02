#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
 
using namespace std;
 
bool myfunction (int i,int j) { return (i<j); }
 
int main()
{
    int Q,D,P;
    cin >> Q;
    double result;
    while(Q != 0){
        cin >> D >> P;
        //Qx = P(x-D) -> Qx = Px - Pd -> - Pd = Qx - Px -> x = PD/(P-Q)
        result = (double) (P*D)/(P-Q);
        result = result* Q;
        if ((int) result == 1){
            cout << (int) result << " pagina" << endl;
        }
        else
             cout << (int) result << " paginas" << endl;
        cin >> Q;
    }
    return 0;
}
