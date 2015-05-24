#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double s,a;
    string type;
    double arc;
    double chord;
    while(cin >> s >> a >> type){
        arc = 0;
        chord = 0;
        if (type == "min"){
            a = (a/60.0);
        }
        a = (2 * M_PI) * (a/360.0);
        a = min(a,(2*M_PI - a));
        arc = (((double) (a/(2.0 * M_PI))) * (2.0 * ( s + 6440) * M_PI));
        chord = 2.0 * (s + 6440) * sin(a/2.0);
        printf("%.6f %.6f\n",arc,chord);
    }
    return 0;
}
