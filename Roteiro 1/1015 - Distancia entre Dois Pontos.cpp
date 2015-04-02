#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main()
{
    float x1,y1;
    float x2,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
 
    float dist;
 
    float teste = (x2 - x1);
 
    float part1 = (pow(teste,2));
 
 
    teste = (y2 - y1);
 
    float part2 = (pow(teste,2));
 
 
    dist = sqrt ( ( part1 + part2 ) );
 
    printf("%.4f\n",dist);
 
    return 0;
}

